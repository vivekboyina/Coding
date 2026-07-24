# Binary Search

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array of integers `nums` which is sorted in ascending order, and an integer `target`, write a function to search `target` in `nums`. If `target` exists, then return its index. Otherwise, return `-1`.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [-1,0,3,5,9,12], target = 9
Output: 4
Explanation: 9 exists in nums and its index is 4

```

 **Example 2:** 

```
Input: nums = [-1,0,3,5,9,12], target = 2
Output: -1
Explanation: 2 does not exist in nums so return -1

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -104 < nums[i], target < 104
- All the integers in nums are unique.
- nums is sorted in ascending order.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 31.4 MB (beats 7.94%)  
**Submitted:** 2026-07-24T15:30:00.511Z  

```cpp
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(nums[m] > target) h = m - 1;
            else if(nums[m] < target) l = m + 1;
            else return m;
            cout << l << " " << h << " " << m << endl;
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/binary-search/)