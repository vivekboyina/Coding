# 4Sum

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array `nums` of `n` integers, return  *an array of all the  **unique**  quadruplets*  `[nums[a], nums[b], nums[c], nums[d]]` such that:

- 0 <= a, b, c, d < n
- a, b, c, and d are distinct.
- nums[a] + nums[b] + nums[c] + nums[d] == target

You may return the answer in  **any order**.

 

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
**Runtime:** 25 ms (beats 29.84%)  
**Memory:** 17.4 MB (beats 84.45%)  
**Submitted:** 2026-07-11T15:40:32.110Z  

```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int trgt) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i - 1] == nums[i]) continue;
            for(int j = i + 1; j < n; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int l = j + 1;
                int r = n - 1;
                long long sum;
                while(l < r)
                {
                    sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[l] + (long long)nums[r];
                    if(sum > trgt) r--;
                    else if(sum < trgt) l++;
                    else
                    {
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l < r && nums[l - 1] == nums[l]) l++;
                        while(l < r && nums[r + 1] == nums[r]) r--;
                    }
                }
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/4sum/)