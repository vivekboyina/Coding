# 4Sum

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array `nums` of `n` integers, return  *an array of all the  **unique**  quadruplets*  `[nums[a], nums[b], nums[c], nums[d]]` such that:

- 0 <= a, b, c, d < n
- a, b, c, and d are distinct.
- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in  **any order**.

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,0,-1,0,-2,2], target = 0
Output: [[-2,-1,1,2],[-2,0,0,2],[-1,0,0,1]]

```

 **Example 2:** 

```
Input: nums = [2,2,2,2,2], target = 8
Output: [[2,2,2,2]]

```

 

 **Constraints:** 

- 1 <= nums.length <= 200
- -109 <= nums[i] <= 109
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 26 ms (beats 20.79%)  
**Memory:** 17.2 MB (beats 89.28%)  
**Submitted:** 2026-11-21T02:25:59.470Z  

```cpp
/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < n; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int k = j + 1;
                int l = n - 1;
                while(k < l)
                {
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l];
                    if(sum == (long long)target)
                    {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        l--;
                        k++;
                        while(k < l && nums[k] == nums[k - 1]) k++;
                        while(l > k && nums[l] == nums[l + 1]) l--;
                    }
                    else if(sum > (long long)target) l--;
                    else if(sum < (long long)target) k++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end


```

---

[View on LeetCode](https://leetcode.com/problems/4sum/)