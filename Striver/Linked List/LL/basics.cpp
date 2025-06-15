#include <bits/stdc++.h>
using namespace std;

//class Node
struct Node {
    public:
    int data;
    Node* next;

    public:
    Node(int data1,Node* next1){
        //this.data = data1;
        //this.next = next1;
        data = data1;
        next = next1;
    }

    public:
    Node(int data1){
        data = data1;
        next = nullptr;
    }
};

Node* arrToLL(vector<int> &arr){
    Node *head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1 ; i < arr.size() ; i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
int lengthLL(Node* head){
    int cnt = 0;
    Node* temp = head;
    while(temp){
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

int searchLL(Node* head, int val){
    Node* temp = head;
    while(temp){
        if(temp->data == val){
            return 1;
        }
        temp = temp -> next;
    }
    return 0;
}

Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head -> next;
    delete temp;

    return head;
}

Node* deleteTail(Node* head){
    if(head == NULL || head-> next == NULL) return NULL;
    Node* temp = head;
    while(temp->next-> next != NULL){
        temp = temp -> next;
    }
    temp-> next = nullptr;

    return head;
}

int main(){
    vector<int> arr = {2, 8, 4 , 56};
    // //better method
    // Node* y = new Node(arr[0], nullptr);
    // cout << y << " " << y->data <<  endl;
    // //Old method
    // Node x = Node(arr[0], nullptr);
    // cout << x.data << " " <<  x.next << endl;

    Node* head = arrToLL(arr);
    // cout << head << endl;

    Node* temp = head;
    int cnt = 0;
    while(temp){
        cout << temp -> data << " ";
        temp = temp-> next;
    }
    cout << endl << lengthLL(head) << endl;
    cout << searchLL(head, 3) << endl;
    cout << searchLL(head, 56) << endl<<endl;

    cout << searchLL(head, 8) << endl << endl;

    Node* newHead = deleteHead(head);
    cout << newHead->data << endl << endl;

    cout << deleteHead(newHead)->data << endl;
    cout << searchLL(head, 8) << endl;//since 8 got deleted from the memory 

}