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
**Runtime:** 0 ms  
**Memory:** 8.6 MB  
**Submitted:** 2026-09-26T00:54:08.437Z  

```cpp
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int t) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        long long sum;
        int n = nums.size();
        if(n < 4) return ans;
        int l,r;
        for(int i = 0; i < n - 3; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < n - 2; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                l = j + 1;
                r = n - 1;
                while(l < r)
                {
                    sum = nums[l] + nums[r] + nums[i] + nums[j];
                    if(sum > t) r--;
                    else if(sum < t) l++;
                    else
                    {
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l < r && nums[l] == nums[l - 1]) l++;
                        while(l < r && nums[r] == nums[r + 1]) r--;
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