# Maximum Product Subarray

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array `nums`, find a subarray that has the largest product, and return  *the product*.

The test cases are generated so that the answer will fit in a  **32-bit**  integer.

 **Note**  that the product of an array with a single element is the value of that element.

 

 **Example 1:** 

```
Input: nums = [2,3,-2,4]
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
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 17.8 MB (beats 23.00%)  
**Submitted:** 2026-09-24T12:40:07.671Z  

```cpp
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int rl = 1;
        int lr = 1;
        int n = nums.size();
        int ans = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(lr == 0) lr = 1;
            if(rl == 0) rl = 1;
            lr*=nums[i];
            rl*=nums[n - i - 1];
            ans = max({ans,lr,rl});
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-subarray/)