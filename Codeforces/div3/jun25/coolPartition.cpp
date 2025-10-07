#include <bits/stdc++.h>
using namespace std;

int coolPartition(int n, vector<int> &arr){
    map<int,int> mpp;
    for(int i = 0; i < n; i++){
        mpp[arr[i]]++;
    }
    int maxCount = 0;
    for(auto it : mpp){
        if(it.second > maxCount){
            maxCount = it.second;
        }
    }
    return maxCount;
}
int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int ans = coolPartition(n,arr);
        cout << ans << endl;
    }
}