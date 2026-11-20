/*
 * @lc app=leetcode id=75 lang=cpp
 *
 * [75] Sort Colors
 */

// @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = 0;
        while(low <= high && mid <= high)
        {
            if(nums[mid] == 1) mid++;
            else if(nums[mid] == 0)
            {
                swap(nums[mid],nums[low]);
                low++;
                mid++;
            }
            else if(nums[mid] == 2)
            {
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};
// @lc code=end

