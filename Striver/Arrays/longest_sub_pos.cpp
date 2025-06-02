class Solution{
public:
    int longestSubarray(vector<int> &nums, int k){
        int left = 0 , right = 0;
        int maxLen = 0;
        int sum = nums[0];
        int n = nums.size();

        while(right < n){
            while(left <= right && sum > k){
                sum -= nums[left];
                left++;
            }
            if(sum == k){
                int len = right - left + 1;
                maxLen = max(maxLen, len);
            }
            right++;
            if(right < n) sum += nums[right];
        }
        return maxLen;
    }
};