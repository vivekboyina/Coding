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
**Runtime:** 0 ms  
**Memory:** 9.9 MB  
**Submitted:** 2026-08-08T03:08:24.395Z  

```cpp
class Solution {
public:
    void rec(int i,vector<int>nums,set<vector<int>>& st,vector<int>row)
    {
        if(i >= nums.size())
        {
            st.insert(row);
            return;
        }
        row.push_back(nums[i]);
        rec(i + 1,nums,st,row);
        row.pop_back();
        rec(i + 1,nums,st,row);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<int>row;
        rec(0,nums,st,row);
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets-ii/)