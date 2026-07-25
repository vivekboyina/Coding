# Search a 2D Matrix

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given an `m x n` integer matrix `matrix` with the following two properties:

- Each row is sorted in non-decreasing order.
- The first integer of each row is greater than the last integer of the previous row.

Given an integer `target`, return `true`  *if*  `target`  *is in*  `matrix`  *or*  `false`  *otherwise*.

You must write a solution in `O(log(m * n))` time complexity.

 

 **Example 1:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true

```

 **Example 2:** 

```
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false

```

 

 **Constraints:** 

- m == matrix.length
- n == matrix[i].length
- 1 <= m, n <= 100
- -104 <= matrix[i][j], target <= 104

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13.4 MB (beats 7.67%)  
**Submitted:** 2026-07-25T00:58:05.487Z  

```cpp
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mtrx, int tgt) {
        int n = mtrx.size();
        int m = mtrx[0].size();
        int low;
        int high;
        int mid;
        for(int i = 0; i < n; i++)
        {
            if(mtrx[i][0] > tgt) return false;
            if(mtrx[i][m - 1] < tgt) continue;
            low = 0;
            high = m - 1;
            while(low <= high)
            {
                mid = low + (high - low)/2;
                if(mtrx[i][mid] == tgt) return true;
                else if(mtrx[i][mid] > tgt) high = mid - 1;
                else low = mid + 1;
            }
        }
        return false;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/search-a-2d-matrix/)