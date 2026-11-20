/*
 * @lc app=leetcode id=152 lang=cpp
 *
 * [152] Maximum Product Subarray
 */

// @lc code=start
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int res = INT_MIN;
        for(int i : nums) res = max(i,res);
        int a = 0,b = 0;
        for(int i : nums)
        {
            if(i == 0)
            {
                a = 0;
                b = 0;
            }
            else if(a < 0)
            {
                if(b == 0) b = 1;
                b*=i;
                if(b < 0)
                {
                    a = b*a;
                    b = 0;
                }
            }
            else
            {
                if(a == 0) a = 1;
                a*=i;
            }
            if(i != 0) res = max({b,a,res});
        }
        reverse(nums.begin(),nums.end());
        a = 0,b = 0;
        for(int i : nums)
        {
            if(i == 0)
            {
                a = 0;
                b = 0;
            }
            else if(a < 0)
            {
                if(b == 0) b = 1;
                b*=i;
                if(b < 0)
                {
                    a = b*a;
                    b = 0;
                }
            }
            else
            {
                if(a == 0) a = 1;
                a*=i;
            }
            if(i != 0) res = max({b,a,res});
        }
        return res;
    }
};
// @lc code=end

