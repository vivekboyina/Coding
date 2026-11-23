# Two Sum

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given an array of integers `nums` and an integer `target`, return  *indices of the two numbers such that they add up to `target`*.

You may assume that each input would have  ***exactly *one solution**, and you may not use the* same* element twice.

You can return the answer in any order.

 

Original
C++
 **Example 1:** 

 **Input:**  `nums = [2,7,11,15], target = 9`

 **Output:**  `[0,1]`

 **Explanation:** 

The sum of `nums[0]` and `nums[1]` is `2 + 7 = 9`, which equals the target. Therefore, the indices `[0, 1]` are returned.

 **Example 2:** 

 **Input:**  `nums = [3,2,4], target = 6`

 **Output:**  `[1,2]`

 **Explanation:** 

The sum of `nums[1]` and `nums[2]` is `2 + 4 = 6`, which equals the target. Therefore, the indices `[1, 2]` are returned.

 **Example 3:** 

 **Input:**  `nums = [3,3], target = 6`

 **Output:**  `[0,1]`

 **Explanation:** 

The sum of `nums[0]` and `nums[1]` is `3 + 3 = 6`, which equals the target. Therefore, the indices `[0, 1]` are returned.

 

 **Constraints:** 

- 2 <= nums.length <= 104
- -109 <= nums[i] <= 109
- -109 <= target <= 109
- Only one valid answer exists.

 

 **Follow-up:** Can you come up with an algorithm that is less than `O(n2)` time complexity?

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 89.87%)  
**Memory:** 14.8 MB (beats 41.24%)  
**Submitted:** 2026-11-23T04:32:00.784Z  

```cpp
/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mp;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(mp.find(target - nums[i]) != mp.end()) return {mp[target - nums[i]],i};
            mp[nums[i]] = i;
        }
        return {-1,-1};
    }
};
// @lc code=end


```

---

[View on LeetCode](https://leetcode.com/problems/two-sum/)