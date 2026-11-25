# Find Peak Element

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

A peak element is an element that is strictly greater than its neighbors.

Given a  **0-indexed**  integer array `nums`, find a peak element, and return its index. If the array contains multiple peaks, return the index to  **any of the peaks**.

You may imagine that `nums[-1] = nums[n] = -∞`. In other words, an element is always considered to be strictly greater than a neighbor that is outside the array.

You must write an algorithm that runs in `O(log n)` time.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,3,1]
Output: 2
Explanation: 3 is a peak element and your function should return the index number 2.
```

 **Example 2:** 

```
Input: nums = [1,2,1,3,5,6,4]
Output: 5
Explanation: Your function can return either index number 1 where the peak element is 2, or index number 5 where the peak element is 6.
```

 

 **Constraints:** 

- 1 <= nums.length <= 1000
- -231 <= nums[i] <= 231 - 1
- nums[i] != nums[i + 1] for all valid i.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.5 MB (beats 85.19%)  
**Submitted:** 2026-11-25T01:47:22.851Z  

```cpp
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            bool lft = m > 0 ? nums[m] > nums[m - 1] ? true : false : true;
            bool rht = m < n - 1 ? nums[m] > nums[m + 1] ? true : false : true;
            if(lft && rht) return m;
            else if(lft && !rht) l = m + 1;
            else h = m - 1;
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-peak-element/)