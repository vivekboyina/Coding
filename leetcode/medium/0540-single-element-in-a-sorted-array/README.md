# Single Element in a Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return  *the single element that appears only once*.

Your solution must run in `O(log n)` time and `O(1)` space.

 

 **Example 1:** 

```
Input: nums = [1,1,2,3,3,4,4,8,8]
Output: 2

```

 **Example 2:** 

```
Input: nums = [3,3,7,7,10,11,11]
Output: 10

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- 0 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 26.3 MB (beats 9.60%)  
**Submitted:** 2026-11-26T08:47:09.294Z  

```cpp
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int m;
        if(n == 1) return nums[0];
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(m > 0 && m < n - 1)
            {
                if((m % 2 == 0 && nums[m] == nums[m + 1]) || (m % 2 != 0 && nums[m] == nums[m - 1])) l = m + 1;
                else h = m - 1;
            }
            else if(m == 0)
            {
                if(nums[m] == nums[m + 1]) l = m + 1;
                else h = m - 1;
            }
            else if(m == n - 1)
            {
                if(nums[m] == nums[m - 1]) h = m - 1;
                else l = m + 1;
            }
        }
        return l < n ? nums[l] : nums[h];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-element-in-a-sorted-array/)