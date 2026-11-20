# Maximum Product Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array `nums`, find a subarray that has the largest product, and return  *the product*.

The test cases are generated so that the answer will fit in a  **32-bit**  integer.

 **Note**  that the product of an array with a single element is the value of that element.

 

 **​​​​​​​Example 1:** 

```
Input:OriginalC++ nums = [2,3,-2,4]
Output: 6
Explanation: [2,3] has the largest product 6.

```

 **Example 2:** 

```
Input: nums = [-2,0,-1]
Output: 0
Explanation: The result cannot be 2, because [-2,-1] is not a subarray.

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -10 <= nums[i] <= 10
- The product of any subarray of nums is guaranteed to fit in a 32-bit integer.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 14.13%)  
**Memory:** 17.8 MB (beats 28.53%)  
**Submitted:** 2026-11-19T02:23:18.657Z  

```cpp
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


```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-subarray/)