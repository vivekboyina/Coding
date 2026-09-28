# Permutations

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array `nums` of distinct integers, return all the possible permutations. You can return the answer in  **any order**.

 

 **Example 1:** 

```
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]

```

 **Example 2:** 

```
Input: nums = [0,1]
Output: [[0,1],[1,0]]

```

 **Example 3:** 

```
Input: nums = [1]
Output: [[1]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 6
- -10 <= nums[i] <= 10
- All the integers of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.6 MB (beats 70.33%)  
**Submitted:** 2026-09-28T08:44:34.154Z  

```cpp
class Solution {
public:
    void bkt(vector<int>& nums,vector<bool>& usd,vector<int>& tmp,vector<vector<int>>& ans)
    {
        if(tmp.size() == nums.size())
        {
            ans.push_back(tmp);
            return;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(usd[i]) continue;
            usd[i] = true;
            tmp.push_back(nums[i]);
            bkt(nums,usd,tmp,ans);
            usd[i] = false;
            tmp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        vector<bool>usd(n,false);
        vector<int>tmp;
        bkt(nums,usd,tmp,ans);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutations/)