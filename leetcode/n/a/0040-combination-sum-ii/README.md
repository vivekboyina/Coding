# Combination Sum II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a collection of candidate numbers (`candidates`) and a target number (`target`), find all unique combinations in `candidates` where the candidate numbers sum to `target`.

Each number in `candidates` may only be used  **once**  in the combination.

 **Note:**  The solution set must not contain duplicate combinations.

 

 **Example 1:** 

```
Input: candidates = [10,1,2,7,6,1,5], target = 8
Output: 
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]

```

 **Example 2:** 

```
Input: candidates = [2,5,2,1,2], target = 5
Output: 
[
[1,2,2],
[5]
]

```

 

 **Constraints:** 

- 1 <= candidates.length <= 100
- 1 <= candidates[i] <= 50
- 1 <= target <= 30

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 14.1 MB (beats 65.60%)  
**Submitted:** 2026-08-10T01:36:41.800Z  

```cpp
class Solution {
public:
    void rec(int i,int s,int t,vector<int>& nums,vector<vector<int>>& ans,vector<int>& row)
    {
        if(s == t)
        {
            ans.push_back(row);
            return;
        }
        for(int j = i; j < nums.size(); j++)
        {
            if(j > i && nums[j] == nums[j - 1]) continue;
            if(s > t) break;
            row.push_back(nums[j]);
            rec(j + 1,s + nums[j],t,nums,ans,row);
            row.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cnd, int t) {
        sort(cnd.begin(),cnd.end());
        vector<vector<int>>ans;
        vector<int>row;
        rec(0,0,t,cnd,ans,row);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combination-sum-ii/)