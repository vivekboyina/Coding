# Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array `nums` of  **unique**  elements, return  *all possible*   *subsets*   *(the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10
- All the numbers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 16.8 MB (beats 5.01%)  
**Submitted:** 2026-08-08T02:53:17.044Z  

```cpp
class Solution {
public:
    void rec(int i,vector<int>nums,vector<vector<int>>& ans,vector<int>row)
    {
        if(i >= nums.size())
        {
            ans.push_back(row);
            return;
        }
        row.push_back(nums[i]);
        rec(i + 1,nums,ans,row);
        row.pop_back();
        rec(i + 1,nums,ans,row);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>row;
        rec(0,nums,ans,row);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)