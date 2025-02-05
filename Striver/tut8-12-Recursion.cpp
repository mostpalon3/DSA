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
// void num(int n, int i){
//     if(i>n) return;
//     num(n,i+1);
//     cout << i<<endl;
// }
// int main(){
//     num(12,1);
//     return 0;
// }

//Sum of first n nos
// int sum(int n){
//     if( n== 0 ) return 0;
//     return n + sum(n-1);
// }

// int main(){
//     cout << sum(3);
//     return 0;
// }

//Factorial - recursive
// int sum(int n){
//     if( n== 1 ) return 1;
//     return n * sum(n-1);
// }
// int main(){
//     cout << sum(5);
//     return 0;
// }

//Factorial - parameter
// int factorial(int i,int fact){
//     if( i < 1 ) {
//         return fact;
//         };
//     return factorial(i-1,fact*i);
// }
// int main(){
//     cout << factorial(5,1);
//     return 0;
// }

//reverse using recursion
// void f(int i , int arr[], int n){
//     if(i>n/2) return;
//     swap(arr[i],arr[n-i-1]);
//     f(i+1, arr, n);
// }
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i=0;i < n;i++) cin >> arr[i] ;
//     f(0,arr,n);
//     for(int i = 0;i<n;i++) cout << arr[i] << " ";
// }

//palindrome sc and tc o(n/2)
// bool f(int i , string &s){//s is here for reference
//     if(i >= s.size() / 2) return true;
//     if(s[i] != s[s.size() - i - 1]) return false;
//     return f(i+1, s);
// }
// int main(){
//     string s;
//     cin >> s;
//     cout << f(0, s);
//     return 0;
// }


// Multiple recursion calls 
//fibonnaci - tc:O(2^n)
int f(int n){
    if(n <= 1) return n;
    int last = f(n-1);
    int slast = f(n-2);
    return last + slast;
}
int main(){
    cout << f(4);
    return 0;
}