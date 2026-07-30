# Single Number

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a  **non-empty**  array of integers `nums`, every element appears  *twice*  except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

 **Example 1:** 

 **Input:**  nums = [2,2,1]

 **Output:**  1

 **Example 2:** 

 **Input:**  nums = [4,1,2,1,2]

 **Output:**  4

 **Example 3:** 

 **Input:**  nums = [1]

 **Output:**  1

 

 **Constraints:** 

- 1 <= nums.length <= 3 * 104
- -3  *104 <= nums[i] <= 3*  104
- Each element in the array appears twice except for one element which appears only once.

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 22.81%)  
**Memory:** 20.7 MB (beats 59.32%)  
**Submitted:** 2026-07-30T06:42:54.082Z  

```cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        for(int i : nums) ans^=i;
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/single-number/)