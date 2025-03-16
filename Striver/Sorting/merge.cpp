#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low , int mid , int high){
    vector<int> temp;
    int left = low ;
    int right = mid + 1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    //if the left or right array elements are only left , then nothing to compare , so we directly push them to the temp array
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    //now we need to copy the elements from temp to the real array
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i - low];
    }
}


//we take the reference of the array so , it doesnt have to copy the array each times the recursion runs
void merge_sort(vector <int> &arr, int low , int high){
    if (low >= high) return;
    int mid = (low + high) / 2;
    merge_sort(arr, low, mid);
    merge_sort(arr, mid + 1, high);
    merge(arr, low , mid , high);
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
    merge_sort(arr, low , high);
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}