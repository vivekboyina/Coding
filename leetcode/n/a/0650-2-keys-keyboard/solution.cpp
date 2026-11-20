class Solution {
public:
    int minSteps(int n) {
        if(n == 1) return 0;
        int ans = 0;
        for(int i = 2; i <= n; i++)
        {
            ans++;
            if(n % i == 0 && i > 1  && i != n) return ans + n/i;
        }
        return ans;
    }
};