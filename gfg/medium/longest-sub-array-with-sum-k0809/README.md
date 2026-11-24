# Longest Subarray with Sum K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array  **arr[]**  containing integers and an integer  **k**, your task is to find the length of the longest subarray where the sum of its elements is equal to the given value k. If there is no subarray with sum equal to k, return 0.

 **Examples:** 

```
Input: arr[] = [10, 5, 2, 7, 1, -10], k = 15
Output: 6
Explanation: Subarrays with sum = 15 are [5, 2, 7, 1], [10, 5] and [10, 5, 2, 7, 1, -10]. The length of the longest subarray with a sum of 15 is 6.
```

```
Input: arr[] = [-5, 8, -14, 2, 4, 12], k = -5
Output: 5
Explanation: Subarrays with sum = -5 are [-5] and [-5, 8, -14, 2, 4]. The length of the longest subarray with a sum of -5 is 5.
```

```
Input: arr[] = [10, -10, 20, 30], k = 5
Output: 0
Explanation: No subarray with sum = 5 is present in arr[].
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-24T10:54:16.377Z  

```cpp
class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int ans = 0;
        int n = arr.size();
        vector<int>pf(n);
        pf[0] = arr[0];
        for(int i = 1; i < n; i++) pf[i] = pf[i - 1] + arr[i];
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++)
        {
            if(pf[i] == k) ans = max(ans,i + 1);
            else if(mp.find(pf[i] - k) != mp.end()) ans = max(ans,(i - mp[pf[i] - k]));
            if(mp.find(pf[i]) == mp.end()) mp[pf[i]] = i;
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1)