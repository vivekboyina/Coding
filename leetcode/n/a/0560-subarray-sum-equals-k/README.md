# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

 **Example 1:** 

```
Input: nums = [1,1,1], k = 2
Output: 2

```

 **Example 2:** 

```
Input: nums = [1,2,3], k = 3
Output: 2

```

 

 **Constraints:** 

- 1 <= nums.length <= 2 * 104
- -1000 <= nums[i] <= 1000
- -107 <= k <= 107

## Solution

**Language:** C++  
**Runtime:** 47 ms (beats 49.88%)  
**Memory:** 45.3 MB (beats 71.35%)  
**Submitted:** 2026-07-09T14:26:38.035Z  

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        mp[0] = 1;
        int sum = 0;
        int ans = 0;
        for(int i : nums)
        {
            sum+=i;
            if(mp.count(sum - k)) ans+=mp[sum - k];
            mp[sum]++;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)