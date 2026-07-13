# Transpose Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-1258-red)

## Problem

Given a 2D integer array `matrix`, return  *the  **transpose**  of*  `matrix`.

The  **transpose**  of a matrix is the matrix flipped over its main diagonal, switching the matrix's row and column indices.

 

 **Example 1:** 

```
Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [[1,4,7],[2,5,8],[3,6,9]]

```

 **Example 2:** 

```
Input: matrix = [[1,2,3],[4,5,6]]
Output: [[1,4],[2,5],[3,6]]

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 1000
- 1 <= m * n <= 105
- -109 <= matrix[i][j] <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.2 MB (beats 5.95%)  
**Submitted:** 2026-07-13T09:18:47.071Z  

```cpp
class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mtrx) {
        vector<vector<int>>ans;
        for(int i = 0; i < mtrx[0].size(); i++)
        {
            vector<int>row;
            for(int j = 0; j < mtrx.size(); j++) row.push_back(mtrx[j][i]);
            ans.push_back(row);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/transpose-matrix/)