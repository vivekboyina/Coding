# Rat in a Maze

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a binary matrix  **maze[][]**  of size **n × n**  containing values  **0**  and  **1**, find all possible paths for a rat to travel from the source cell (0, 0) to the destination cell (n - 1, n - 1). The rat can move in four directions: up(U), down(D), left(L), and right(R).

- 1 represents an open cell through which the rat can move.
- 0 represents a blocked cell that cannot be traversed.

The rat can move only through open cells and cannot visit the same cell more than once in a path. Return all valid paths as strings consisting of 'U', 'D', 'L', and 'R', representing the sequence of moves taken by the rat.

 **Note:**  Return the paths in lexicographically increasing order. If no valid path exists, return an empty list.

 **Examples:** 

```
Input: maze[][] = {{1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}}
Output: ["DDRDRR", "DRDDRR"]
Explanation: There are two valid paths from the source cell (0, 0) to the destination cell (3, 3).

```

```
Input: maze[][] = [[1, 0], [1, 0]]
Output: []
Explanation: No path exists as the destination cell (1, 1) is blocked.

```

 **Constraints:** 
2 ≤ n ≤ 5
0 ≤ maze[i][j] ≤ 1

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-21T09:09:22.865Z  

```cpp
class Solution {
  public:
    void rec(int i,int j,int n,vector<vector<int>> &maze,vector<string>&ans,string rt)
    {
        if(i == n - 1 && j == n - 1)
        {
            ans.push_back(rt);
            return;
        }
        if(i < n - 1 && maze[i + 1][j] == 1)
        {
            rt.push_back('D');
            maze[i][j] = -1;
            rec(i + 1,j,n,maze,ans,rt);
            maze[i][j] = 1;
            rt.pop_back();
        }
        if(j < n - 1 && maze[i][j + 1] == 1)
        {
            rt.push_back('R');
            maze[i][j] = -1;
            rec(i,j + 1,n,maze,ans,rt);
            maze[i][j] = 1;
            rt.pop_back();
        }
        if(j > 0 && maze[i][j - 1] == 1)
        {
            rt.push_back('L');
            maze[i][j] = -1;
            rec(i,j - 1,n,maze,ans,rt);
            maze[i][j] = 1;
            rt.pop_back();
        }
        if(i > 0 && maze[i - 1][j] == 1)
        {
            rt.push_back('U');
            maze[i][j] = -1;
            rec(i - 1,j,n,maze,ans,rt);
            maze[i][j] = 1;
            rt.pop_back();
        }
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string>ans;
        string rt;
        int n = maze.size();
        if(maze[0][0] == 1) rec(0,0,n,maze,ans,rt);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/rat-in-a-maze-problem/1)