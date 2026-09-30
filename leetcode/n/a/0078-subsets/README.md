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
**Runtime:** 1 ms (beats 42.98%)  
**Memory:** 9.9 MB (beats 59.75%)  
**Submitted:** 2026-09-30T00:46:39.839Z  

```cpp
class Solution {
public:
    void rec(vector<int>& nums,vector<int>& ds,vector<vector<int>>& ans,int i)
    {
        if(i == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        rec(nums,ds,ans,i + 1);
        ds.pop_back();
        rec(nums,ds,ans,i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        rec(nums,ds,ans,0);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)