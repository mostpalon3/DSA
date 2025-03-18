#include<bits/stdc++.h>
using namespace std;

//O(nlogn + n) - brute forcce sc- On
// int duplicatesRemoved(int arr[] , int n){
//     set<int> st;

//     for(int i = 0; i < n; i++){
//         st.insert(arr[i]);
//     }

//     int i = 0;
//     for(auto it:st){
//         arr[i] = it;
//         i++;
//     }
//     return i;
// }

//two pointer
//TC - O(n), SC- O1
int duplicatesRemoved(int arr[] , int n){
    int i = 0;

    for(int j = 1; j < n; j++){
        if(arr[i] != arr[j]){
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << duplicatesRemoved(arr, n) <<endl;
    return 0;
}