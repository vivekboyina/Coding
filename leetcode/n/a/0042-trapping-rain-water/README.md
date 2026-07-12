# Trapping Rain Water

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given `n` non-negative integers representing an elevation map where the width of each bar is `1`, compute how much water it can trap after raining.

 

 **Example 1:** 

```
Input: height = [0,1,0,2,1,0,1,3,2,1,2,1]
Output: 6
Explanation: The above elevation map (black section) is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped.

```

 **Example 2:** 

```
Input: height = [4,2,0,3,2,5]
Output: 9

```

 

 **Constraints:** 

- n == height.length
- 1 <= n <= 2 * 104
- 0 <= height[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 26.6 MB (beats 43.17%)  
**Submitted:** 2026-07-12T11:17:43.571Z  

```cpp
class Solution {
public:
    int trap(vector<int>& hght) {
        int n = hght.size();
        vector<int>pfm(n);
        int m = hght[0];
        int ans = 0;
        pfm[n - 1] = hght[n - 1];
        for(int i = n - 2; i >= 0; i--) pfm[i] = max(pfm[i + 1],hght[i]);
        for(int i = 1; i < n; i++)
        {
            if(m > hght[i] && hght[i] < pfm[i]) ans+=(min(m,pfm[i]) - hght[i]);
            m = max(m,hght[i]);
        }
        return ans;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/trapping-rain-water/)