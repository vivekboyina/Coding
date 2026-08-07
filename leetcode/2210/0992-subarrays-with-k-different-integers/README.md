# Subarrays with K Different Integers

![Difficulty](https://img.shields.io/badge/Difficulty-2210-red)

## Problem

Given an integer array `nums` and an integer `k`, return  *the number of  **good subarrays**  of* `nums`.

A  **good array**  is an array where the number of different integers in that array is exactly `k`.

- For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.

A  **subarray**  is a  **contiguous**  part of an array.

 

 **Example 1:** 

```
Input: nums = [1,2,1,2,3], k = 2
Output: 7
Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]

```

 **Example 2:** 

```
Input: nums = [1,2,1,3,4], k = 3
Output: 3
Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- 1 <= nums[i], k <= nums.length

## Solution

**Language:** C++  
**Runtime:** 81 ms (beats 63.16%)  
**Memory:** 59.2 MB (beats 15.70%)  
**Submitted:** 2026-08-07T04:55:52.193Z  

```cpp
class Solution {
public:
    int sld(vector<int>nums,int k)
    {
        unordered_map<int,int>mp;
        int i = 0;
        int ans = 0;
        int n = nums.size();
        for(int j = 0; j < n; j++)
        {
            mp[nums[j]]++;
            while(mp.size() > k)
            {
                mp[nums[i]]--;
                if(mp[nums[i]] == 0) mp.erase(nums[i]);
                i++;
            }
            ans+=(j - i + 1);
        }
        return ans;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return sld(nums,k) - sld(nums,k - 1);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarrays-with-k-different-integers/)