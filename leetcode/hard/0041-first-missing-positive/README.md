# First Missing Positive

![Difficulty](https://img.shields.io/badge/Difficulty-Hard-red)

## Problem

Given an unsorted integer array `nums`. Return the  *smallest positive integer*  that is  *not present*  in `nums`.

You must implement an algorithm that runs in `O(n)` time and uses `O(1)` auxiliary space.

 

 **Example 1:** 

```
Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.

```

 **Example 2:** 

```
Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.

```

 **Example 3:** 

```
Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -231 <= nums[i] <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 59.92%)  
**Memory:** 55.1 MB (beats 62.93%)  
**Submitted:** 2026-07-09T15:55:45.862Z  

```cpp
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) if(nums[i] < 0) nums[i] = 0;
        for(int i : nums)
        {
            i = abs(i);
            if(i >= 1 && i <= n)
            {
                if(nums[i - 1] == 0) nums[i - 1] = -1*(n + 1);
                else if(nums[i - 1] > 0) nums[i - 1] = -1*nums[i - 1];
            }
        }
        for(int i = 0; i < n; i++) if(nums[i] >= 0) return i + 1;
        return n + 1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/first-missing-positive/)