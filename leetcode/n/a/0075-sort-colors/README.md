# Sort Colors

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given an array `nums` with `n` objects colored red, white, or blue, sort them  **in-place** so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

 

 **Example 1:** 

 **Input:**  nums = [2,0,2,1,1,0]

 **Output:**  [0,0,1,1,2,2]

 **Explanation:** 

The array has two 0s, two 1s, and two 2s. Sorting them in-place places all 0s first, then all 1s, then all 2s.

 **Example 2:** 

 **Input:**  nums = [2,0,1]

 **Output:**  [0,1,2]

 **Explanation:** 

The array has one each of 0, 1, and 2, arranged in-place in the order 0, 1, 2.

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 300
- nums[i] is either 0, 1, or 2.

 

 **Follow up:**  Could you come up with a one-pass algorithm using only constant extra space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11.6 MB (beats 49.27%)  
**Submitted:** 2026-09-24T12:44:04.812Z  

```cpp
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0;
        int m = 0;
        int h = nums.size() - 1;
        while(l <= h && m <= h)
        {
            if(nums[m] == 1) m++;
            else if(nums[m] == 2)
            {
                swap(nums[m],nums[h]);
                h--;
            }
            else if(nums[m] == 0)
            {
                swap(nums[m],nums[l]);
                l++;
                m++;
            }
        }
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sort-colors/)