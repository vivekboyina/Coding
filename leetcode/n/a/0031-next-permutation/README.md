# Next Permutation

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

A  **permutation**  of an array of integers is an arrangement of its members into a sequence or linear order.

- For example, for arr = [1, 2, 3], the following are all the permutations of arr: [1, 2, 3], [1, 3, 2], [2, 1, 3], [2, 3, 1], [3, 1, 2], [3, 2, 1].

The  **next permutation**  of an array of integers is the next lexicographically greater permutation of its integer. More formally, if all the permutations of the array are sorted in one container according to their lexicographical order, then the  **next permutation**  of that array is the permutation that follows it in the sorted container. If such arrangement is not possible, the array must be rearranged as the lowest possible order (i.e., sorted in ascending order).

Examples:

- The next permutation of arr = [1, 2, 3] is [1, 3, 2].
- The next permutation of arr = [2, 3, 1] is [3, 1, 2].
- The next permutation of arr = [3, 2, 1] is [1, 2, 3] because [3, 2, 1] does not have a lexicographical larger rearrangement.

Given an array of integers `nums`,  *find the next permutation of*  `nums`.

The replacement must be  **in place**  and use only constant extra memory.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [1,3,2]

```

 **Example 2:** 

```
Input: nums = [3,2,1]
Output: [1,2,3]

```

 **Example 3:** 

```
Input: nums = [1,1,5]
Output: [1,5,1]

```

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 0 <= nums[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.9 MB (beats 12.17%)  
**Submitted:** 2026-11-21T02:07:29.991Z  

```cpp
/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(is_sorted(nums.begin(),nums.end(),greater<int>()))
        {
            reverse(nums.begin(),nums.end());
            return;
        } 
        for(int i = n - 2; i >= 0; i--)
        {
            if(nums[i] < nums[i + 1])
            {
                int j = n - 1;
                while(j > i && nums[j] <= nums[i]) j--;
                swap(nums[i],nums[j]);
                sort(nums.begin() + i + 1,nums.end());
                break;
            }
        }
    }
};
// @lc code=end


```

---

[View on LeetCode](https://leetcode.com/problems/next-permutation/)