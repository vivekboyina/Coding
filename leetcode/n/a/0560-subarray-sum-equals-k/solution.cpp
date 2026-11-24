class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        vector<int>pf(n);
        pf[0] = nums[0];
        for(int i = 1; i < n; i++) pf[i] = nums[i] + pf[i - 1];
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++)
        {
            if(pf[i] == k) ans++;
            if(mp.find(pf[i] - k) != mp.end()) ans = ans + mp[pf[i] - k];
            mp[pf[i]]++;
        }
        return ans;
    }
};