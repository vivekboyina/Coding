# Search a 2D Matrix II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Write an efficient algorithm that searches for a value `target` in an `m x n` integer matrix `matrix`. This matrix has the following properties:

- Integers in each row are sorted in ascending from left to right.
- Integers in each column are sorted in ascending from top to bottom.

 

 **Example 1:** 

```
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 5
Output: true

```

 **Example 2:** 

```
Input: matrix = [[1,4,7,11,15],[2,5,8,12,19],[3,6,9,16,22],[10,13,14,17,24],[18,21,23,26,30]], target = 20
Output: false

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= n, m <= 300
- -109 <= matrix[i][j] <= 109
- All the integers in each row are sorted in ascending order.
- All the integers in each column are sorted in ascending order.
- -109 <= target <= 109

## Solution

**Language:** C++  
**Runtime:** 57 ms (beats 37.46%)  
**Memory:** 18.8 MB (beats 39.36%)  
**Submitted:** 2026-07-28T13:00:52.287Z  

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mtrx, int tgt) {
        int m = mtrx.size();
        int n = mtrx[0].size();
        int low;
        int high;
        int mid;
        for(int i = 0; i < m; i++)
        {
            if(mtrx[i][0] > tgt) return false;
            if(mtrx[i][n - 1] < tgt) continue;
            if(mtrx[i][n - 1] >= tgt && mtrx[i][0] <= tgt)
            {
                low = 0;
                high = n - 1;
                while(low <= high)
                {
                    mid = low + (high - low)/2;
                    if(mtrx[i][mid] == tgt) return true;
                    else if(mtrx[i][mid] > tgt) high = mid - 1;
                    else low = mid + 1;
                }
            }
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/)