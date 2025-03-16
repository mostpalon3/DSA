#include <bits/stdc++.h>
using namespace std;

//TC O(n2)
void selection_sort(int arr[], int n){
    for(int i = 0; i <= n - 2; i++){
        int mini = i ;
        for(int j = i + 1; j <= n -1 ; j++){
            if(arr[mini] > arr[j]){
                mini = j;
            }
        }
        //Swap
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    selection_sort(arr, n);
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    return 0;
}