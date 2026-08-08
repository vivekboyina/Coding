# Subsets II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array `nums` that may contain duplicates, return  *all possible*   *subsets** (the power set)*.

The solution set  **must not**  contain duplicate subsets. Return the solution in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,2]
Output: [[],[1],[1,2],[1,2,2],[2],[2,2]]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [[],[0]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 10
- -10 <= nums[i] <= 10

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 7.50%)  
**Memory:** 17.5 MB (beats 5.17%)  
**Submitted:** 2026-08-08T03:11:32.289Z  

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
        while(i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        rec(i + 1,nums,ans,row);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>row;
        sort(nums.begin(),nums.end());
        rec(0,nums,ans,row);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets-ii/)