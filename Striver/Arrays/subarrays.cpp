#include <bits/stdc++.h>
using namespace std;

int longest_sub_brute(vector<int> arr, int n , int k){
    int maxLen = 0;
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i ; j < n ; j++){
            sum += arr[j];
            if(sum == k) maxLen = max(maxLen, j - i + 1);
        }
    }
    return maxLen;
}


int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << longest_sub_brute(arr, n, k) << endl;
}