# Find a Peak Element II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

A  **peak**  element in a 2D grid is an element that is  **strictly greater**  than all of its  **adjacent** neighbors to the left, right, top, and bottom.

Given a  **0-indexed**  `m x n` matrix `mat` where  **no two adjacent cells are equal**, find  **any**  peak element `mat[i][j]` and return  *the length 2 array* `[i,j]`.

You may assume that the entire matrix is surrounded by an  **outer perimeter**  with the value `-1` in each cell.

You must write an algorithm that runs in `O(m log(n))` or `O(n log(m))` time.

 

Original
C++
 **Example 1:** 

```
Input: mat = [[1,4],[3,2]]
Output: [0,1]
Explanation: Both 3 and 4 are peak elements so [1,0] and [0,1] are both acceptable answers.

```

 **Example 2:** 

```
Input: mat = [[10,20,15],[21,30,14],[7,16,32]]
Output: [1,1]
Explanation: Both 30 and 32 are peak elements so [1,1] and [2,2] are both acceptable answers.

```

 

 **Constraints:** 

- m == mat.length
- n == mat[i].length
- 1 <= m, n <= 500
- 1 <= mat[i][j] <= 105
- No two adjacent cells are equal.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.5 MB  
**Submitted:** 2026-11-27T02:07:49.076Z  

```cpp
class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l,r,h;
        bool lft,rht,upt,blt;
        for(int i = 0; i < n; i++)
        {
            l = 0;
            r = m - 1;
            while(l <= r)
            {
                h = l + (r - l)/2;
                lft = h > 0 ? mat[i][h] > mat[i][h - 1] ? true : false : true;
                rht =  h < m - 1 ? mat[i][h] > mat[i][h + 1] ? true : false : true;
                upt = i > 0 ? mat[i][h] > mat[i - 1][h] ? true : false : true;
                blt = i < n - 1 ? mat[i][h] > mat[i + 1][h] ? true : false : true;
                if(lft && rht && upt && blt) return {i,h};
                else if(!lft && rht) r = h - 1;
                else if(!lft && !rht)
                {
                    if(h > 0 && h < m - 1)
                    {
                        if(mat[i][h - 1] < mat[i][h + 1]) l = h + 1;
                        else r = h - 1;
                    }
                    else if(h > 0) r = h - 1;
                    else l = h + 1;
                }
                else l = h + 1;
                cout << l << " " << r << " " << h << " " << i << endl;
            }
        }
        return {-1,-1};
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-a-peak-element-ii/)