# Cyclically Rotating a Grid

![Difficulty](https://img.shields.io/badge/Difficulty-1766-red)

## Problem

You are given an `m x n` integer matrix `grid`​​​, where `m` and `n` are both  **even**  integers, and an integer `k`.

The matrix is composed of several layers, which is shown in the below image, where each color is its own layer:

A cyclic rotation of the matrix is done by cyclically rotating  **each layer**  in the matrix. To cyclically rotate a layer once, each element in the layer will take the place of the adjacent element in the  **counter-clockwise**  direction. An example rotation is shown below:

Return  *the matrix after applying* `k`  *cyclic rotations to it*.

 

 **Example 1:** 

```
Input: grid = [[40,10],[30,20]], k = 1
Output: [[10,20],[40,30]]
Explanation: The figures above represent the grid at every state.

```

 **Example 2:** 

```
Input: grid = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]], k = 2
Output: [[3,4,8,12],[2,11,10,16],[1,7,6,15],[5,9,13,14]]
Explanation: The figures above represent the grid at every state.

```

 

 **Constraints:** 

- m == grid.length
- n == grid[i].length
- 2 <= m, n <= 50
- Both m and n are even integers.
- 1 <= grid[i][j] <= 5000
- 1 <= k <= 109

## Solution

**Language:** C++  
**Runtime:** 18 ms (beats 33.01%)  
**Memory:** 16.7 MB (beats 94.50%)  
**Submitted:** 2026-09-15T10:25:13.456Z  

```cpp
class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(),m = grid[0].size();
        int l = 0,r = m - 1,t = 0,b = n - 1,c;
        int tmp;
        while(l < r && t < b)
        {
            int ln = b - t,br = r - l;
            int p = 2*(ln + br);
            c = k % p;
            while(c--)
            {
                tmp = grid[t][l];
                for(int i = l; i < r; i++) grid[t][i] = grid[t][i + 1];
                for(int i = t; i < b; i++) grid[i][r] = grid[i + 1][r];
                for(int i = r; i > l; i--) grid[b][i] = grid[b][i - 1];
                for(int i = b; i > t; i--) grid[i][l] = grid[i - 1][l];
                grid[t + 1][l] = tmp;
            }
            t++;
            l++;
            b--;
            r--;
        }
        return grid;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/cyclically-rotating-a-grid/)