# Search Insert Position

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [1,3,5,6], target = 5
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,3,5,6], target = 2
Output: 1

```

 **Example 3:** 

```
Input: nums = [1,3,5,6], target = 7
Output: 4

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -104 <= nums[i] <= 104
- nums contains distinct values sorted in ascending order.
- -104 <= target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.6 MB (beats 78.44%)  
**Submitted:** 2026-07-24T15:54:26.308Z  

```cpp
class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l = 0;
        int r = nums.size() - 1;
        int m;
        while(l <= r)
        {
            m = l + (r - l)/2;
            if(nums[m] == t) return m;
            else if(nums[m] > t) r = m - 1;
            else l = m + 1;
        }
        return l;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/search-insert-position/)