/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(mp.find(target - nums[i]) != mp.end()) return {mp[target - nums[i]],i};
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
// @lc code=end

