"""
sentiment_transformer_finetune.py
Fine-tune a DistilBERT model for sentiment classification using Hugging Face.

Run (GPU recommended for speed):
  pip install transformers datasets torch
  python3 sentiment_transformer_finetune.py

Notes:
 - For real practicals, use a dataset like "imdb" or a CSV loaded with datasets.load_dataset('csv', data_files=...).
 - This script demonstrates structure; training on small machines can be slow.
"""

from datasets import Dataset, load_metric
from transformers import DistilBertTokenizerFast, DistilBertForSequenceClassification, Trainer, TrainingArguments
import numpy as np
import torch

def build_small_dataset():
    data = {
        "text": [
            "I loved the movie, it was fantastic and thrilling!",
            "What a great experience — I will watch it again.",
            "Absolutely horrible. I hated it.",
            "The film was boring and too long.",
            "An excellent performance by the lead actor.",
            "Terrible script and poor direction.",
            "It was an average movie, not bad but not great.",
            "I enjoyed some parts but some were dull.",
            "Outstanding! A masterpiece.",
            "Waste of time. Do not recommend."
        ],
        "label": [2,2,0,0,2,0,1,1,2,0]  # 0=neg,1=neutral,2=pos
    }
    return Dataset.from_dict(data)

def preprocess(tokenizer, examples):
    return tokenizer(examples["text"], truncation=True, padding="max_length", max_length=128)

if __name__ == "__main__":
    dataset = build_small_dataset()
    # split
    train_test = dataset.train_test_split(test_size=0.2, seed=42)
    train_ds = train_test["train"]
    test_ds = train_test["test"]

    tokenizer = DistilBertTokenizerFast.from_pretrained("distilbert-base-uncased")
    train_ds = train_ds.map(lambda e: tokenizer(e["text"], truncation=True, padding="max_length", max_length=128), batched=True)
    test_ds = test_ds.map(lambda e: tokenizer(e["text"], truncation=True, padding="max_length", max_length=128), batched=True)

    # ensure format for Trainer
    train_ds = train_ds.rename_column("label", "labels")
    test_ds = test_ds.rename_column("label", "labels")
    train_ds.set_format(type="torch", columns=["input_ids","attention_mask","labels"])
    test_ds.set_format(type="torch", columns=["input_ids","attention_mask","labels"])

    model = DistilBertForSequenceClassification.from_pretrained("distilbert-base-uncased", num_labels=3)

    training_args = TrainingArguments(
        output_dir="./results",
        num_train_epochs=3,
        per_device_train_batch_size=8,
        per_device_eval_batch_size=8,
        logging_steps=10,
        evaluation_strategy="epoch",
        save_strategy="no"
    )

    metric = load_metric("accuracy")

    def compute_metrics(eval_pred):
        logits, labels = eval_pred
        preds = np.argmax(logits, axis=-1)
        return metric.compute(predictions=preds, references=labels)

    trainer = Trainer(
        model=model,
        args=training_args,
        train_dataset=train_ds,
        eval_dataset=test_ds,
        compute_metrics=compute_metrics
    )

    trainer.train()

    # Example prediction
    texts = ["I absolutely loved the cinematography and the story.",
             "The movie was too slow and I fell asleep."]
    enc = tokenizer(texts, truncation=True, padding=True, return_tensors="pt")
    model.eval()
    with torch.no_grad():
        outputs = model(**enc)
        probs = torch.nn.functional.softmax(outputs.logits, dim=-1).numpy()
        preds = np.argmax(probs, axis=-1)
    label_map = {0:"negative", 1:"neutral", 2:"positive"}
    for t,p,pr in zip(texts, preds, probs):
        print({"text": t, "predicted": label_map[int(p)], "probs": pr.tolist()})