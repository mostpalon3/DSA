#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[] , int n){
    for(int i = 0; i < n; i++){
        if(arr[i] < arr[i - 1]){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << sorted(arr, n) <<endl;
    return 0;
}