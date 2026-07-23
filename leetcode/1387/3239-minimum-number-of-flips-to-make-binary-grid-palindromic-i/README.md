# Minimum Number of Flips to Make Binary Grid Palindromic I

![Difficulty](https://img.shields.io/badge/Difficulty-1387-red)

## Problem

You are given an `m x n` binary matrix `grid`.

A row or column is considered  **palindromic**  if its values read the same forward and backward.

You can  **flip**  any number of cells in `grid` from `0` to `1`, or from `1` to `0`.

Return the  **minimum**  number of cells that need to be flipped to make  **either**  all rows  **palindromic**  or all columns  **palindromic**.

 

 **Example 1:** 

 **Input:**  grid = [[1,0,0],[0,0,0],[0,0,1]]

 **Output:**  2

 **Explanation:** 

Flipping the highlighted cells makes all the rows palindromic.

 **Example 2:** 

 **Input:**  grid = [[0,1],[0,1],[0,0]]

 **Output:**  1

 **Explanation:** 

Flipping the highlighted cell makes all the columns palindromic.

 **Example 3:** 

 **Input:**  grid = [[1],[0]]

 **Output:**  0

 **Explanation:** 

All rows are already palindromic.

 

 **Constraints:** 

- m == grid.length
- n == grid[i].length
- 1 <= m  *n <= 2*  105
- 0 <= grid[i][j] <= 1

## Solution

**Language:** C++  
**Runtime:** 10 ms (beats 44.97%)  
**Memory:** 181.8 MB (beats 77.52%)  
**Submitted:** 2026-07-23T06:37:58.743Z  

```cpp
class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        int ans = INT_MAX;
        int l;
        int r;
        for(int i = 0; i < n; i++)
        {
            l = 0;
            r = m - 1;
            while(l < r)
            {
                if(grid[i][l] != grid[i][r]) cnt+=1;
                l++;
                r--;
            }
        }
        ans = min(ans,cnt);
        cnt = 0;
        for(int i = 0; i < m; i++)
        {
            l = 0;
            r = n - 1;
            while(l < r)
            {
                if(grid[l][i] != grid[r][i]) cnt+=1;
                l++;
                r--;
            }
        }
        ans = min(ans,cnt);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-number-of-flips-to-make-binary-grid-palindromic-i/)