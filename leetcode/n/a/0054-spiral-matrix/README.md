# Spiral Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an `m x n` `matrix`, return  *all elements of the*  `matrix`  *in spiral order*.

 

 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 10
- -100 <= matrix[i][j] <= 100

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.4 MB (beats 18.55%)  
**Submitted:** 2026-08-10T08:37:14.923Z  

```cpp
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int l = 0,r = mat[0].size() - 1,t = 0,b = mat.size() - 1,i;
        while(l <= r && t <= b)
        {
            for(i = l; i <= r; i++) ans.push_back(mat[t][i]);
            t++;
            for(i = t; i <= b; i++) ans.push_back(mat[i][r]);
            r--;
            if(t <= b)
            {
                for(i = r; i >= l; i--) ans.push_back(mat[b][i]);
                b--;
            }
            if(l <= r)
            {
                for(i = b; i >= t; i--) ans.push_back(mat[i][l]);
                l++;
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/spiral-matrix/)