class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long,long long>mp;
        long long csum = 0;
        long long n = nums.size();
        for(int i = 0; i < k; i++)
        {
            csum+=nums[i];
            mp[nums[i]]++;
        }
        long long ans = 0;
        if(mp.size() == k) ans = max(ans,csum);
        for(long long i = k; i < n; i++)
        {
            mp[nums[i - k]]--;
            mp[nums[i]]++;
            csum-=nums[i - k];
            csum+=nums[i];
            if(mp[nums[i - k]] == 0) mp.erase(nums[i - k]);
            if(mp.size() == k) ans = max(ans,csum);
        }
        return ans;
    }
};