# Find First and Last Position of Element in Sorted Array

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array of integers `nums` sorted in non-decreasing order, find the starting and ending position of a given `target` value.

If `target` is not found in the array, return `[-1, -1]`.

You must write an algorithm with `O(log n)` runtime complexity.

 

 **Example 1:** 

```
Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

```

 **Example 2:** 

```
Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

```

 **Example 3:** 

```
Input: nums = [], target = 0
Output: [-1,-1]

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109
- nums is a non-decreasing array.
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 17.5 MB (beats 90.01%)  
**Submitted:** 2026-07-28T10:04:13.903Z  

```cpp
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(nums[mid] == target)
            {
                while(mid < n && nums[mid] == target) mid++;
                high = mid - 1;
                mid-=1;
                while(mid >= 0 && nums[mid] == target) mid--;
                low = mid + 1;
                return {low,high};
            }
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return {-1,-1};
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/)