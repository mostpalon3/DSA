#include <bits/stdc++.h>
using namespace std;

string blackboard(int n){
    for(int i = 0; i < n/2; i++){
       if((2*i*(i+1)) == n){
        return "Bob";
       }
    }
    return "Alice";
}

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string res = blackboard(n);

        cout << n << " " << res << endl;
    }
}