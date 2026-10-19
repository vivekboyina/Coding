# Last Visited Cell in a Directional Grid

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given an `m x n` matrix `grid` where each cell contains one of the following characters:

- 'L': move one cell left.
- 'R': move one cell right.
- 'U': move one cell up.
- 'D': move one cell down.

You start at cell `(0, 0)`, which is considered visited. At each step, move to the cell indicated by the character in your current cell.

The process  **ends**  if the indicated move would either leave the grid or enter a cell that has already been visited. In either case, the move is  **not**  made.

Return an integer array `[r, c]` representing the  **row and column indices**  of the  **last visited cell**. The indices are  **0-based**.

 

 **Example 1:** 

 **Input:**  grid = [["R","D"],["U","L"]]

 **Output:**  [1,0]

 **Explanation:** 

- Start at cell (0, 0), which contains 'R', so move right to (0, 1).
- At cell (0, 1), the character is 'D', so move down to (1, 1).
- At cell (1, 1), the character is 'L', so move left to (1, 0).
- At cell (1, 0), the character is 'U', which indicates moving to (0, 0). However, (0, 0) has already been visited, so this move is not made.
- Therefore, the process ends at the last visited cell (1, 0), so the answer is [1, 0].

 **Example 2:** 

 **Input:**  grid = [["R","R","R"]]

 **Output:**  [0,2]

 **Explanation:** 

- Start at cell (0, 0), which contains 'R', so move right to (0, 1).
- At cell (0, 1), the character is 'R', so move right to (0, 2).
- At cell (0, 2), the character is 'R', which indicates moving to (0, 3). However, (0, 3) is outside the grid, so this move is not made.
- Therefore, the process ends at the last visited cell (0, 2), so the answer is [0, 2].

 

 **Constraints:** 

- 1 <= m == grid.length <= 105
- 1 <= n == grid[i].length <= 105
- m * n <= 105
- grid[i][j] is one of 'L', 'R', 'U', or 'D'.

## Solution

**Language:** C++  
**Runtime:** 66 ms (beats 44.44%)  
**Memory:** 153.9 MB (beats 22.22%)  
**Submitted:** 2026-10-19T15:56:31.021Z  

```cpp
class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>mt(n,vector<int>(m,0));
        mt[0][0] = 1;
        int i = 0,j = 0;
        while(i >= 0 && i < n && j >= 0 && j < m)
        {
            if(grid[i][j] == 'L')
            {
                if(j - 1 < 0 || mt[i][j - 1] == 1) return {i,j};
                j-=1;
            }
            else if(grid[i][j] == 'R')
            {
                if(j + 1 >= m || mt[i][j + 1] == 1) return {i,j};
                j+=1;
            }
            else if(grid[i][j] == 'U')
            {
                if(i - 1 < 0 || mt[i - 1][j] == 1) return {i,j};
                i-=1;
            }
            else if(grid[i][j] == 'D')
            {
                if(i + 1 >= n || mt[i + 1][j] == 1) return {i,j};
                i+=1;
            }
            mt[i][j] = 1;
        }
        return {i,j};
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/last-visited-cell-in-a-directional-grid/)