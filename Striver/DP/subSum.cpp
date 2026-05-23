// Problem Statement: We are given an array ‘ARR’ with N positive integers. We need to find if there is a subset in “ARR” with a sum equal to K. If there is, return true else return false.
#include <bits/stdc++.h>
using namespace std;

bool subSum(int ind, vector<int> &arr, int target,vector<vector<int>> &dp){
    if(target == 0 ) return true;
    if(ind == 0) return target == arr[ind];

    if(dp[ind][target]!=-1) return dp[ind][target];

    bool not_take = subSum(ind-1,arr,target,dp);

    bool take = false;
    if(target>=arr[ind]){
        take = subSum(ind-1,arr,target-arr[ind],dp);
    }
    return dp[ind][target] =  take || not_take;
}

int main(){
    vector<int> arr = {1,2,9,445,12,1,0};
    int target1 = 13;
    int target2 = 5;
    vector<vector<int>> dp1(arr.size(), vector<int>(target1+1,-1));
    vector<vector<int>> dp2(arr.size(),vector<int>(target2+1,-1));

    bool res1 = subSum(arr.size()-1,arr,target1,dp1);
    bool res2 = subSum(arr.size()-1,arr,target2,dp2);

    cout << res1 << res2 <<endl;
}