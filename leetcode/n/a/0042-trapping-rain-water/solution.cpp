class Solution {
public:
    int trap(vector<int>& hght) {
        int n = hght.size();
        vector<int>pfm(n);
        int m = hght[0];
        int ans = 0;
        pfm[n - 1] = hght[n - 1];
        for(int i = n - 2; i >= 0; i--) pfm[i] = max(pfm[i + 1],hght[i]);
        for(int i = 1; i < n; i++)
        {
            if(m > hght[i] && hght[i] < pfm[i]) ans+=(min(m,pfm[i]) - hght[i]);
            m = max(m,hght[i]);
        }
        return ans;
    }
};
