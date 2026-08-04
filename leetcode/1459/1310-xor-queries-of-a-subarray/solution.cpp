class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& qu) {
        int n = arr.size();
        vector<int>pf(n);
        pf[0] = arr[0];
        for(int i = 1; i < n; i++) pf[i] = pf[i - 1]^arr[i];
        int q = qu.size();
        vector<int>ans(q);
        for(int i = 0; i < q; i++)
        {
            if(qu[i][0] == 0) ans[i] = pf[qu[i][1]];
            else ans[i] = pf[qu[i][1]]^pf[qu[i][0] - 1];
        }
        return ans;
    }
};