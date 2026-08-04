# Check if there is a direct edge between two vertices

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an undirected graph containing  **V**  vertices numbered from 0 to V - 1, represented by a 2D adjacency list  **adj[][]**, where each  **adj[i]**  represents the list of vertices connected to vertex **i**. You are also given two vertices  **u**  and  **v**. Your task is to determine whether there is a direct edge between u and v in the graph.
If an edge exists between u and v, return  **true** ; otherwise, return  **false.** 

 **Examples :** 

```
Input: adj[][] = [[1, 3, 4], [0, 2], [1, 4], [0], [0, 2]], u = 0, v = 3
   
Output: true 
Explanation: The graph contains edges (0-1), (0-4), (0-3) (1-2) and (2-4). Since there is a direct edge between vertices 0 and 3, the output is true.
```

```
Input: adj[][] = [[2, 3, 4], [3], [0, 3], [0, 1, 2], [0]], u = 3, v = 4
   
Output: false
Explanation: The graph contains edges (0-2), (0-3), (0-4), (1-3) and (2-3). Since there is no direct edge between vertices 3 and 4, the output is false.
```

**Constraints:
**1 ≤ V = adj.size() ≤ 104
0 ≤ adj[i][j], u, v < V

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-04T06:18:44.262Z  

```cpp
class Solution {
  public:
    bool checkEdge(vector<vector<int>>& adj, int u, int v) {
        // code here
        for(int i = 0; i < adj[u].size(); i++)
        {
            if(adj[u][i] == v) return true;
        }
        return false;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-if-there-is-a-direct-edge-between-two-vertices/1)