#include <iostream>
#include <string>
using namespace std;

class Node {
public:
    string data;
    Node* next;
    Node* prev;

    Node(string data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }
    Node(string data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

class BrowserHistory {
    Node* currentPage;
public:
    BrowserHistory(string homepage) {
        currentPage = new Node(homepage);
    }

    void visit(string url) {
        Node* newPage = new Node(url);
        currentPage->next = newPage;
        newPage->prev = currentPage;
        currentPage = currentPage->next;
    }

    string back(int steps) {
        while (steps) {
            if (currentPage->prev) {
                currentPage = currentPage->prev;
            } else {
                break;
            }
            steps--;
        }
        return currentPage->data;
    }

    string forward(int steps) {
        while (steps) {
            if (currentPage->next) {
                currentPage = currentPage->next;
            } else {
                break;
            }
            steps--;
        }
        return currentPage->data;
    }
};

int main() {
    BrowserHistory browser("leetcode.com");
    
    browser.visit("google.com");
    browser.visit("facebook.com");
    browser.visit("youtube.com");
    
    cout << "Back 1: " << browser.back(1) << endl;       // facebook.com
    cout << "Back 1: " << browser.back(1) << endl;       // google.com
    cout << "Forward 1: " << browser.forward(1) << endl; // facebook.com
    
    browser.visit("linkedin.com");                       // Clears forward history
    
    cout << "Forward 2: " << browser.forward(2) << endl; // linkedin.com
    cout << "Back 2: " << browser.back(2) << endl;       // google.com
    cout << "Back 7: " << browser.back(7) << endl;       // leetcode.com

    return 0;
}