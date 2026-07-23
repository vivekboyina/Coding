# Largest Positive Integer That Exists With Its Negative

![Difficulty](https://img.shields.io/badge/Difficulty-1167-red)

## Problem

Given an integer array `nums` that  **does not contain**  any zeros, find  **the largest positive**  integer `k` such that `-k` also exists in the array.

Return  *the positive integer* `k`. If there is no such integer, return `-1`.

 

 **Example 1:** 

```
Input: nums = [-1,2,-3,3]
Output: 3
Explanation: 3 is the only valid k we can find in the array.

```

 **Example 2:** 

```
Input: nums = [-1,10,6,7,-7,1]
Output: 7
Explanation: Both 1 and 7 have their corresponding negative values in the array. 7 has a larger value.

```

 **Example 3:** 

```
Input: nums = [-10,8,6,7,-2,-3]
Output: -1
Explanation: There is no a single valid k, we return -1.

```

 

 **Constraints:** 

- 1 <= nums.length <= 1000
- -1000 <= nums[i] <= 1000
- nums[i] != 0

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 80.16%)  
**Memory:** 23.5 MB (beats 72.57%)  
**Submitted:** 2026-07-23T06:20:43.145Z  

```cpp
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int sum = 0;
        while(i < j)
        {
            sum = nums[i] + nums[j];
            if(sum == 0) return nums[j];
            else if(sum > 0) j--;
            else if(sum < 0) i++;
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/largest-positive-integer-that-exists-with-its-negative/)