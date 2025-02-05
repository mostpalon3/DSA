#include<bits/stdc++.h>
using namespace std;

//Recursion

// int i = 0;
// void print(){
//     //Base condn
//     if(i == 1000){
//         return;
//     }
//     i += 1;
//     cout << i << endl;
//     print();
// }

// int main(){
//     print();

//     return 0;
// }

//Print name n times
//O(N)->tc and sc
// void name(int n, int i){
//     if(i>n) return;

//     cout << "TS"<<endl;
//     name(n,i+1);
// }

// int main(){
//     name(12,0);
//     return 0;
// }

//Reverse no
// void num(int n, int i){
//     if(n<i) return;

//     cout << n<<endl;
//     num(n-1,i);
// }

// int main(){
//     num(12,1);
//     return 0; 
// }

// printing no. with backtrack
// void num(int n, int i){
//     if(i<1) return;

//     num(n,i-1);
//     cout << i<<endl;
// }

// int main(){
//     num(12,12);
//     return 0;
// }

//reverse
void num(int n, int i){
    if(i>n) return;

    num(n,i+1);
    cout << i<<endl;
}

int main(){
    num(12,1);
    return 0;
}
