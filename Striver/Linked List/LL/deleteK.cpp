#include <iostream>
using namespace std;

// Define the Node class for the linked list
class Node {
public:
    int data;
    Node* next;
    
    // Constructor
    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Your existing function
Node* deleteK(Node* head, int k){
    if(head == NULL) return NULL;
    if(k == 1){
        Node* temp = head;
        head = head -> next ;
        delete temp;//or free(temp);
        return head;
    }
    int cnt = 0;
    Node* temp = head;
    Node* prev = NULL;
    while(temp){
        cnt++;
        if(cnt == k ){
            prev -> next = prev-> next -> next;
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head; // Return head if k is out of bounds
}

Node* deleteValue(Node* head, int data){
    if(head == NULL) return NULL;
    if(head->data == data){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }
    Node* temp = head->next;
    Node* prev = head;
    while(temp){
        if(temp->data == data){
            prev->next = prev->next->next; 
            delete temp;
            return head;
        }
        prev = temp;
        temp = temp -> next;
    }
    return head;
}

// Function to print the linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data;
        if (temp->next != NULL) {
            cout << " -> ";
        }
        temp = temp->next;
    }
    cout << std::endl;
}

int main() {
    // Creating a linked list: 1->2->3->4->5 manually
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    
    std::cout << "Original list: ";
    printList(head);
    
    int k = 3; // Delete the 3rd node
    head = deleteK(head, k);
    
    std::cout << "List after deleting " << k << "th node: ";
    printList(head);
    
    // Clean up memory
    Node* current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

    Node* newHead =  deleteValue(head, 4) ;
    printList(newHead);
    
    return 0;
}
