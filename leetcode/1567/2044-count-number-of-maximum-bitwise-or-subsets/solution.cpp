class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int bor;
        for(int i = 0; i < (1 << n); i++)
        {
            bor = 0;
            for(int j = 0; j < n; j++)
            {
                if(i & (1 << j)) bor|=nums[j];
            }
            mp[bor]++;
        }
        int ans = 0;
        int maxy = INT_MIN;
        for(auto it : mp)
        {
            if(it.first > maxy)
            {
                maxy = it.first;
                ans = it.second;
            }
        }
        return ans;
    }
};