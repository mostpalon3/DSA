#include<bits/stdc++.h>
using namespace std;

// // Extraction of no.
// int main(){
//     int N = 7789;
//     while(N>0){
//         int ld = N%10;
//         cout<<ld;
//         N = N/10;
//     }
//     }

    //Armstrong number 
// bool isArmstrong(int t) {
//     int N = t;
//     int arm = 0;
//     while (N > 0) {
//         int ld = N % 10;        // Extract last digit
//         arm += (ld * ld * ld);  // Add cube of last digit
//         N /= 10;                // Remove last digit
//     }
//     return arm == t;            // Check if sum equals original number
// }

// int main() {
//     int t;
//     cout << "Enter a number to check if it is an Armstrong number: ";
//     cin >> t;

//     if (isArmstrong(t)) {
//         cout << t << " is an Armstrong number." << endl;
//     } else {
//         cout << t << " is not an Armstrong number." << endl;
//     }

//     return 0;
// }

//Print all numbers 
//O(N)
// int main(){
//     int N;
//     cin >> N;
//     for(int i = 1; i<=N; i++){
//         if(N%i==0){
//             cout << i << endl;
//         }
//     }
//     return 0;
// }

//optimised for O sqrt N
// int main() {
//     int n = 54;
//     vector<int> ls;
//     for(int i; i*i<=n;i++){//sqrt is itself a function , so it would have been called again and again
//         if(n%i==0){
//         ls.push_back(i);
//         if(n/i != i){
//             ls.push_back(n/i);
//         }
//         }
//     }
//     //O(no of factors * log (no of factors)) 
//     sort(ls.begin(),ls.end());
//     //O(number of factors)
//     for(auto it : ls) cout << it << " ";
//     return 0;
// }

// int main(){
//     int n;
//     cout << "Enter a number:" << endl;
//     cin >> n;
//     int count = 0;
//     for(int i = 1; i* i <= n; i++){
//         if(n%i==0){
//             count++;
//             if(i != n/i){
//                 count ++;
//             }
//         }
//     }
//     if (count == 2)
//     {
//         cout << n << " is a prime number";
//     }
//     else{
//         cout << n << " is not a prime number";
//     }
//     return 0;
    
// }

//gcd
// int main(){
//     int a,b;
//     cin >> a >> b;
//     for (int i=min(a,b); i >= 1; i--){
//        if(a%i == 0 && b%i == 0 ){
//         cout << i << endl;
//         return 0;
//        }
//     }
// }

//Euclidean Algo
int main(){
    int a,b ;
    cin >> a >> b;
    while (a>0 && b>0)
    {
        if(a>b){
            a = a%b;
        }
        else{
            b = b % a;
        }
    }
    if(a==0){
        cout << b;
        return 0;
    }
    else{
        cout << a;
        return 0;
    }  
}