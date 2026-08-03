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
**Memory:** 9.8 MB (beats 82.94%)  
**Submitted:** 2026-08-03T10:35:07.031Z  

```cpp
class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        for(int i = 0; i < (1 << n); i++)
        {
            vector<int>sub;
            for(int j = 0; j < n; j++)
            {
                if(i & (1 << j)) sub.push_back(nums[j]);
            }
            ans.push_back(sub);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsets/)