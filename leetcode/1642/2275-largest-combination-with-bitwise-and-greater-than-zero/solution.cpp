class Solution {
public:
    int largestCombination(vector<int>& cnds) {
        int ans = 0;
        int n = cnds.size();
        int ban;
        int cnt;
        for(int i = 0; i < (1 << n); i++)
        {
            ban = -1;
            cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(i & (1 << j))
                {
                    cnt++;
                    if(ban == -1) ban = cnds[j];
                    else ban&=cnds[j];
                }
            }
            if(ban > 0) ans = max(ans,cnt);
        }
        return ans;
    }
};