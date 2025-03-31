#include<bits/stdc++.h>
using namespace std;

int union(vector<int> a, int n, vector<int> b, int m){
    
}

int main(){
    int n,m;
    cin >> n >> m;

    vector<int> a(n);
    vector<int> b(m);
    
    for(int i = 0; i < n; i++){
        cout << "array 1";
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cout << "array 2";
        cin >> b[i];
    }

    union(a, n, b, m);
    return 0;
}