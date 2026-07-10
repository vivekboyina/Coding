# Find All Duplicates in an Array

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array `nums` of length `n` where all the integers of `nums` are in the range `[1, n]` and each integer appears  **at most**   **twice**, return  *an array of all the integers that appears  **twice***.

You must write an algorithm that runs in `O(n)` time and uses only  *constant*  auxiliary space, excluding the space needed to store the output

 

 **Example 1:** 

```
Input: nums = [4,3,2,7,8,2,3,1]
Output: [2,3]

```

 **Example 2:** 

```
Input: nums = [1,1,2]
Output: [1]

```

 **Example 3:** 

```
Input: nums = [1]
Output: []

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 105
- 1 <= nums[i] <= n
- Each element in nums appears once or twice.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 48.4 MB (beats 96.99%)  
**Submitted:** 2026-07-10T00:50:40.119Z  

```cpp
class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i : nums)
        {
            i = abs(i);
            if(i >= 1 && i <= n)
            {
                if(nums[i - 1] > 0) nums[i - 1] = -1*nums[i - 1];
                else if(nums[i - 1] < 0) ans.push_back(i);
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-all-duplicates-in-an-array/)