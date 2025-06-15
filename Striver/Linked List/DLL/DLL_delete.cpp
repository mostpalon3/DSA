#include <iostream>
using namespace std;

struct Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node*prev1){
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(int data1){
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* arrToDLL(vector<int> &arr){
    if (arr.empty()) return nullptr;
    Node* head = new Node(arr[0]);
    Node* prev = head;

    for(int i = 1; i < arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}

void printList(Node* head){
    Node* temp = head;
    while(temp){
        cout << temp->data ;
                if (temp->next != NULL) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* prev = head;
    Node* temp = prev->next;
    prev->next = nullptr;
    temp->prev = nullptr;
    
    head = temp;
    delete prev;
    return head;
    
}
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp-> next;
    }
    Node* prev = temp->prev;
    temp->prev = nullptr;
    prev->next = nullptr;
    delete temp;
    return head;    
}

Node* deleteK(Node* head, int k){
    if(head == NULL) return NULL;
    int cnt = 0;
    Node* temp = head;
    while(temp){
        cnt++;
        if(cnt == k){
            break;
        }
        temp = temp->next;
    }
    Node* prev = temp->prev;
    Node* next = temp->next;

    if(prev == NULL && next ==NULL){
        return NULL;
    }
    else if(prev == NULL){
        head = deleteHead(head);
        return head;
    }
    else if(next == NULL){
        head = deleteTail(head);
        return head;
    }
    prev->next = next;
    next->prev = prev;
    temp->next = nullptr;
    temp->prev = nullptr;
    delete temp;
    return head;
}

int main(){
    vector<int> arr = {2, 4 , 56 , 34, 90};
    Node* head = arrToDLL(arr);
    // Node* newHead = deleteHead(head);
    // printList(newHead);
    // Node* newTail = deleteTail(newHead);
    // printList(newTail);
    Node* newNode = deleteK(head, 5);
    printList(newNode);
}