#include<bits/stdc++.h>
using namespace std;

//rotate left by 1 place
void rotate_left(vector<int> &arr, int n){
    int temp = arr[0];
    for(int i = 1; i < n; i++){
        arr[i - 1] = arr[i];
    }
    arr[n-1] = temp;
}
void rotate_left_k(vector<int> &arr, int n, int k){
    k = k % n;
    vector<int> temp(k);
    for(int i = 0; i < k ; i++){
        temp[i] = arr[i];
    }

    for(int i = k ; i < n; i++){
        arr[i - k] = arr[i];
    }

    for(int i = n - k ; i < n; i++){
        arr[i] = temp[i - (n - k)];
    }
}

    void rotate_right(vector<int>& nums, int k) {
        int n = nums.size();
        if(n < 1 || n > 1e5) return;
        k = k % n;
        vector<int> temp(n - k);

        for(int i = 0; i < n-k; i++){
            if(nums[i] < INT_MIN || nums[i] > INT_MAX) return;
            temp[i] = nums[i];
        }

        for(int i = n - k; i < n; i++){
            if(nums[i] < INT_MIN || nums[i] > INT_MAX) return;
            nums[i - (n - k)] = nums[i];
        }

        for(int i = k; i < n; i++){
            nums[i] = temp[i - k];
        }
    }

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // rotate_left(arr, n);
    rotate_left_k(arr, n, k);

    for(int i = 0; i < n; i++){
        cout << arr[i] << ' ';
    }
    cout << endl;
}