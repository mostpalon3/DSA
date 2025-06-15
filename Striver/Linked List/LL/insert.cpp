#include <iostream>
using namespace std;

struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* insertK(Node* head, int val, int k){
    if(head == NULL){
        Node* temp = new Node(val);
        return temp;
    }
    if(k == 0){
        Node* temp = new Node(val, head);
        return temp;
    }
    Node* temp = head;
    int cnt = 0;
}

int main() {
    Node* head = NULL;

    // 🔧 Insert logic here: call your insert function(s)
    // Example: head = insertAtEnd(head, 10);

    // Print the linked list
    Node* temp = head;
    while (temp) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    return 0;
}