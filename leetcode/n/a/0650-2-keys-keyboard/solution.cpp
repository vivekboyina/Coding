class Solution {
public:
    int minSteps(int n) {
        if(n == 1) return 0;
        int ans = n;
        vector<int>dp(n + 1,INT_MAX);
        for(int i = 2; i <= n; i++)
        {
            dp[i] = min(dp[i],i);
            for(int j = i + i; j <= n; j+=i)
            {
                dp[j] = min(j,dp[i] + j/i);
            }
        }
        return dp[n];
    }
};