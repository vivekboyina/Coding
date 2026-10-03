class Solution {
public:
    int numDecodings(string s) {
        if(s[0] == '0') return 0;
        int n = s.length();
        vector<int>dp(n,0);
        int k;
        dp[0] = 1;
        for(int i = 1; i < n; i++)
        {
            k = (s[i - 1] - '0')*10 + (s[i] - '0');
            if(k < 27)
            {
                if(k == 0) return 0;
                else if(k < 10) dp[i] = dp[i - 1];
                else if(k % 10 == 0)
                {
                    if(i > 1) dp[i] = dp[i - 2];
                    else dp[i] = 1;
                }
                else if(i > 1) dp[i] = dp[i - 2] + dp[i - 1];
                else dp[i] = dp[i - 1] + 1;
            }
            else if(k % 10 == 0) return 0;
            else dp[i] = dp[i - 1];
        }
        for(int i : dp) cout << i << " ";
        return dp[n - 1];
    }
};