class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>dp(n);
        dp[0] = nums[0];
        for(int i = 1; i < n - 1; i++)
        {
            if(i == 1) dp[1] = max(nums[1],dp[0]);
            else dp[i] = max(dp[i - 1],nums[i] + dp[i - 2]);
        }
        int ans = dp[n - 2];
        dp[n - 1] = nums[n - 1];
        for(int i = n - 2; i > 0; i--)
        {
            if(i == n - 2) dp[n - 2] = max(nums[n - 2],dp[n - 1]);
            else dp[i] = max(dp[i + 1],nums[i] + dp[i + 2]);
        }
        return max(ans,dp[1]);
    }
};