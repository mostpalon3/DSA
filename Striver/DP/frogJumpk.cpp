#include <bits/stdc++.h>
using namespace std;
//frog with k jumps
//sc-O(n) tc-(k*n)
// int minCost(int n,vector<int> &height, int k){
//     vector<int> dp(n, INT_MAX);
//     dp[0]=0;
    
//     for(int i =1; i<n;i++){
//         int minJump = INT_MAX;
//         for(int j=1;j<=k;j++){
//             if(i-j>=0){
//                 int jump=dp[i-j]+abs(height[i]-height[i-j]);
//                 minJump = min(minJump,jump);
//             }
//         }
//         dp[i]=minJump;
//     }
//     return dp[n-1];
// }

// Frog Jump with K Distance — O(k) space optimized
int minCost(int n, vector<int>& height, int k) {
    deque<int> dp; // stores last k dp values
    dp.push_back(0); // dp[0] = 0

    for (int i = 1; i < n; i++) {
        int minJump = INT_MAX;

        for (int j = 1; j <= k && j <= i; j++) {
            int jump = dp[dp.size() - j] + abs(height[i] - height[i - j]);//here we took dp.size(), since we are only storing k elements now so , dp only contains max of k or less elements , so we differencing j with reference to only k elements, previously we took i , which corresponded to last k position from i , here its under the dp size limit
            minJump = min(minJump, jump);
        }

        dp.push_back(minJump);

        // keep only last k values
        if (dp.size() > k)
            dp.pop_front();
    }

    return dp.back();
}

int main(){
    int k = 4;
    vector<int> height = {10,20,30,10,40};

    cout<< "min cost:"<< minCost(5,height,k)<<endl;
    return 0;
}