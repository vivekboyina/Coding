class Solution {
public:
    int maxProfit(vector<int>& pr) {
        int i = 0;
        int j = 1;
        int ans = 0;
        for(j = 1; j < pr.size(); j++)
        {
            ans = max(ans,pr[j] - pr[i]);
            if(pr[i] > pr[j]) i = j;
        }
        return ans;
   }
};