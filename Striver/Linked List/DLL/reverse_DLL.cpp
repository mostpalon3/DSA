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

Node* reverseDLL(Node* head){
    Node* last = NULL;
    Node* current = head;
    while(current){
        last = current->prev;
        current->prev = current -> next;
        current -> next = last;
        current = current -> prev;
    }
    return last -> prev;
}

int main(){
    vector<int> arr = {2, 4 , 56 , 34, 90};
    Node* head = arrToDLL(arr);
    printList(head);
    printList(reverseDLL(head));
}