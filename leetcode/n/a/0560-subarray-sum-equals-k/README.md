# Subarray Sum Equals K

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array of integers `nums` and an integer `k`, return  *the total number of subarrays whose sum equals to*  `k`.

A subarray is a contiguous  **non-empty**  sequence of elements within an array.

 

Original
C++
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
**Runtime:** 0 ms  
**Memory:** 8.4 MB  
**Submitted:** 2026-11-24T02:11:12.682Z  

```cpp
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int ans = 0;
        int n = nums.size();
        vector<int>pf(n);
        pf[0] = nums[0];
        for(int i = 1; i < n; i++) pf[i] = nums[i] + pf[i - 1];
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++)
        {
            if(pf[i] == k)
            {
                // cout << "EE" << endl;
                ans++;
            }
            if(mp.find(pf[i] - k) != mp.end())
            {
                // cout << "ENTERED" << endl;
                ans++;
            }
            mp[pf[i]] = i;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subarray-sum-equals-k/)