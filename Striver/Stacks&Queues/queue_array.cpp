#include <bits/stdc++.h>
using namespace std;

class QueueCl {
    int start = -1;
    int end = -1;
    int st[10];
    int currsize = 0;
    int maxSize = 10;

public:
    void push(int x) {
        if (currsize == maxSize) return;
        if (currsize == 0) {
            start = 0;
            end = 0;
        } else {
            end = (end + 1) % maxSize;
        }
        st[end] = x;
        currsize++;
    }

    int pop() {
        if (currsize == 0) return -1;
        int el = st[start];
        if (currsize == 1) {
            start = -1;
            end = -1;
        } else {
            start = (start + 1) % maxSize;
        }
        currsize--;
        return el;
    }

    int size() {
        return currsize;
    }
};  



int main() {
    QueueCl q;

    // Push elements into the queue
    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Size: " << q.size() << endl;

    cout << "Popped: " << q.pop() << endl; // should be 10
    cout << "Popped: " << q.pop() << endl; // should be 20

    cout << "Size after pops: " << q.size() << endl;

    q.push(40);
    q.push(50);

    cout << "Popped: " << q.pop() << endl; // should be 30
    cout << "Popped: " << q.pop() << endl; // should be 40
    cout << "Popped: " << q.pop() << endl; // should be 50
    cout << "Popped: " << q.pop() << endl; // should be -1 (empty)

    cout << "Final size: " << q.size() << endl;

    return 0;
}