class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n = nums.size();
        vector<long long>pf(n,-1);
        int mx = -1;
        for(int i = 0; i < nums.size(); i++)
        {
            mx = max(mx,nums[i]);
            pf[i] = mx;
        }
        vector<long long>ans(n);
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum+=(pf[i] + nums[i]);
            ans[i] = sum;
        }
        return ans;
    }
};