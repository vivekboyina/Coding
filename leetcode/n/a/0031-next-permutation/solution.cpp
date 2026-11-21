/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(is_sorted(nums.begin(),nums.end(),greater<int>()))
        {
            reverse(nums.begin(),nums.end());
            return;
        } 
        for(int i = n - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i + 1])
            {
                int j = n - 1;
                while(j > i && nums[j] <= nums[i]) j--;
                swap(nums[i],nums[j]);
                sort(nums.begin() + i + 1,nums.end());
                break;
            }
        }
    }
};
// @lc code=end

