#include <bits/stdc++.h>
using namespace std;

// When pivot = low (Hoare’s Partition Scheme)
int partition(vector<int> &arr, int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    while(i < j){
        while(arr[i] <= pivot && i < high){
            i++;
        }
        while(arr[j] > pivot && j > low){
            j--;
        }
        if(i < j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}

// When pivot = high (Lomuto Partition Scheme)
// int partition(vector<int>& arr, int low, int high) {
//     int pivot = arr[high];  
//      int i = low - 1; 

//      for (int j = low; j < high; j++) {
//          if (arr[j] <= pivot) {
//              i++;
//              swap(arr[i], arr[j]);
//          }
//      }
//      swap(arr[i + 1], arr[high]); 
//      return i + 1; 
//  }


//we take the reference of the array so , it doesnt have to copy the array each times the recursion runs
void quick_sort(vector <int> &arr, int low , int high){
    if (low < high) {
        int part = partition(arr, low , high);
        quick_sort(arr, low , part - 1);
        quick_sort(arr, part + 1, high);
    }
}

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n - 1;
    quick_sort(arr, low , high);
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}