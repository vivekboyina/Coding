# Shift 2D Grid

![Difficulty](https://img.shields.io/badge/Difficulty-1337-red)

## Problem

Given a 2D `grid` of size `m x n` and an integer `k`. You need to shift the `grid` `k` times.

In one shift operation:

- Element at grid[i][j] moves to grid[i][j + 1].
- Element at grid[i][n - 1] moves to grid[i + 1][0].
- Element at grid[m - 1][n - 1] moves to grid[0][0].

Return the  *2D grid*  after applying shift operation `k` times.

 

 **Example 1:** 

```
Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 1
Output: [[9,1,2],[3,4,5],[6,7,8]]

```

 **Example 2:** 

```
Input: grid = [[3,8,1,9],[19,7,2,5],[4,6,11,10],[12,0,21,13]], k = 4
Output: [[12,0,21,13],[3,8,1,9],[19,7,2,5],[4,6,11,10]]

```

 **Example 3:** 

```
Input: grid = [[1,2,3],[4,5,6],[7,8,9]], k = 9
Output: [[1,2,3],[4,5,6],[7,8,9]]

```

 

 **Constraints:** 

- m == grid.length
- n == grid[i].length
- 1 <= m <= 50
- 1 <= n <= 50
- -1000 <= grid[i][j] <= 1000
- 0 <= k <= 100

## Solution

**Language:** C++  
**Runtime:** 25 ms (beats 6.13%)  
**Memory:** 18.2 MB (beats 36.54%)  
**Submitted:** 2026-08-10T08:41:46.847Z  

```cpp
class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        vector<vector<int>>ans = grid;
        int m = grid.size();
        int n = grid[0].size();
        while(k--)
        {
            ans = grid;
            for(int i = 0; i < m; i++)
            {
                for(int j = 0; j < n; j++)
                {
                    if(i == m - 1 && j == n - 1) ans[0][0] = grid[i][j];
                    else if(j == n - 1) ans[i + 1][0] = grid[i][j];
                    else ans[i][j + 1] = grid[i][j];
                }
            }
            grid = ans;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/shift-2d-grid/)