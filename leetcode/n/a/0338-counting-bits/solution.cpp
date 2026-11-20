class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n + 1);
        for(int i = 0; i <= n; i++)
        {
            int t = i;
            int c1 = 0;
            while(t > 0)
            {
                c1+=(t & 1);
                t = t >> 1;
            }
            ans[i] = c1;
        }
        return ans;
    }
};