#include <bits/stdc++.h>
using namespace std;

class StackCl{
    int top = -1;
    int st[10];

public:
    void push(int x){
        if(top >= 9) return;
        top++;
        st[top] = x;
    }
    int getTop(){
        if(top == -1) return -1;
        return st[top];
    }
    int pop(){
        if(top == -1) return -1;
        int el = st[top];
        top--;
        return el;
    }
    int size(){
        return top+1;
    }

};
int main(){
    StackCl stackel;

    // Push some elements
    stackel.push(10);
    stackel.push(20);
    stackel.push(30);

    cout << "Top element: " << stackel.getTop() << endl;
    cout << "Size: " << stackel.size() << endl;

    cout << "Popped: " << stackel.pop() << endl;
    cout << "Top after pop: " << stackel.getTop() << endl;
    cout << "Size after pop: " << stackel.size() << endl;
       cout << "Popped: " << stackel.pop() << endl;
    cout << "Size after pop: " << stackel.size() << endl;

    return 0;
}