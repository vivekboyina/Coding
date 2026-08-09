# Combination Sum

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array of  **distinct**  integers `candidates` and a target integer `target`, return  *a list of all  **unique combinations**  of* `candidates` *where the chosen numbers sum to* `target` *.*  You may return the combinations in  **any order**.

The  **same**  number may be chosen from `candidates` an  **unlimited number of times**. Two combinations are unique if the frequency of at least one of the chosen numbers is different.

The test cases are generated such that the number of unique combinations that sum up to `target` is less than `150` combinations for the given input.

 

 **Example 1:** 

```
Input: candidates = [2,3,6,7], target = 7
Output: [[2,2,3],[7]]
Explanation:
2 and 3 are candidates, and 2 + 2 + 3 = 7. Note that 2 can be used multiple times.
7 is a candidate, and 7 = 7.
These are the only two combinations.

```

 **Example 2:** 

```
Input: candidates = [2,3,5], target = 8
Output: [[2,2,2,2],[2,3,3],[3,5]]

```

 **Example 3:** 

```
Input: candidates = [2], target = 1
Output: []

```

 

 **Constraints:** 

- 1 <= candidates.length <= 30
- 2 <= candidates[i] <= 40
- All elements of candidates are distinct.
- 1 <= target <= 40

## Solution

**Language:** C++  
**Runtime:** 183 ms (beats 5.10%)  
**Memory:** 133 MB (beats 5.45%)  
**Submitted:** 2026-08-09T08:31:13.045Z  

```cpp
class Solution {
public:
    void rec(int i,int s,vector<int>nums,int t,vector<vector<int>>& ans,vector<int>cur)
    {
        if(s > t) return;
        if(i == nums.size())
        {
            if(s == t) ans.push_back(cur);
            return;
        }
        cur.push_back(nums[i]);
        rec(i,s + nums[i],nums,t,ans,cur);
        cur.pop_back();
        rec(i + 1,s,nums,t,ans,cur);
    }
    vector<vector<int>> combinationSum(vector<int>& cnd, int t) {
        vector<vector<int>>ans;
        vector<int>cur;
        rec(0,0,cnd,t,ans,cur);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combination-sum/)