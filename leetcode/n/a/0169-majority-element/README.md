# Majority Element

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array `nums` of size `n`, return  *the majority element*.

The majority element is the element that appears more than `⌊n / 2⌋` times. You may assume that the majority element always exists in the array.

 

Original
C++
 **Example 1:** 

```
Input: nums = [3,2,3]
Output: 3

```

 **Example 2:** 

```
Input: nums = [2,2,1,1,1,2,2]
Output: 2

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 5 * 104
- -109 <= nums[i] <= 109
- The input is generated such that a majority element will exist in the array.

 

 **Follow-up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 48.08%)  
**Memory:** 42.1 MB (beats 43.76%)  
**Submitted:** 2026-11-18T07:47:20.614Z  

```cpp
// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int num = -1;
        for(int i : nums)
        {
            if(cnt == 0)
            {
                cnt+=1;
                num = i;
            }
            else if(num != i) cnt-=1;
            else if(num == i) cnt+=1;
        }
        return num;
    }
};
// @lc code=end


```

---

[View on LeetCode](https://leetcode.com/problems/majority-element/)