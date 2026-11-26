# Search a 2D Matrix II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Write an efficient algorithm that searches for a value `target` in an `m x n` integer matrix `matrix`. This matrix has the following properties:

- Integers in each row are sorted in ascending from left to right.
- Integers in each column are sorted in ascending from top to bottom.

 

Original
C++
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
**Runtime:** 62 ms (beats 21.33%)  
**Memory:** 18.5 MB (beats 81.42%)  
**Submitted:** 2026-11-26T08:59:01.702Z  

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++)
        {
            if(matrix[i][m - 1] < target) continue;
            else if(matrix[i][0] > target) break;
            int l = 0;
            int r = m - 1;
            while(l <= r)
            {
                int h = l + (r - l)/2;
                if(matrix[i][h] == target) return true;
                else if(matrix[i][h] > target) r = h - 1;
                else l = h + 1;
            }
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/search-a-2d-matrix-ii/)