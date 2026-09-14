# Set Matrix Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an `m x n` integer matrix `matrix`, if an element is `0`, set its entire row and column to `0`'s.

You must do it in place.

 

 **Example 1:** 

```
Input: matrix = [[1,1,1],[1,0,1],[1,1,1]]
Output: [[1,0,1],[0,0,0],[1,0,1]]

```

 **Example 2:** 

```
Input: matrix = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
Output: [[0,0,0,0],[0,4,5,0],[0,3,1,0]]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[0].length
- 1 <= m, n <= 200
- -231 <= matrix[i][j] <= 231 - 1

 

 **Follow up:** 

- A straightforward solution using O(mn) space is probably a bad idea.
- A simple improvement uses O(m + n) space, but still not the best solution.
- Could you devise a constant space solution?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 21 MB (beats 54.63%)  
**Submitted:** 2026-09-14T12:54:03.239Z  

```cpp
class Solution {
public:
    void setZeroes(vector<vector<int>>& mtrx) {
        int n = mtrx.size();
        int m = mtrx[0].size();
        int c0 = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(mtrx[i][j] == 0)
                {
                    if(j == 0) c0 = 0;
                    else mtrx[0][j] = 0;
                    mtrx[i][0] = 0;
                }
            }
        }
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(mtrx[i][j] != 0)
                {
                    if(mtrx[i][0] == 0 || mtrx[0][j] == 0)
                    {
                      mtrx[i][j] = 0;  
                    }
                }
            }
        }
        if(mtrx[0][0] == 0) for(int i = 0; i < m; i++) mtrx[0][i] = 0;
        if(c0 == 0) for(int i = 0; i < n; i++) mtrx[i][0] = 0;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/set-matrix-zeroes/)