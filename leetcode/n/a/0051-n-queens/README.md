# N-Queens

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

The  **n-queens**  puzzle is the problem of placing `n` queens on an `n x n` chessboard such that no two queens attack each other.

Given an integer `n`, return  *all distinct solutions to the  **n-queens puzzle***. You may return the answer in  **any order**.

Each solution contains a distinct board configuration of the n-queens' placement, where `'Q'` and `'.'` both indicate a queen and an empty space, respectively.

 

 **Example 1:** 

```
Input: n = 4
Output: [[".Q..","...Q","Q...","..Q."],["..Q.","Q...","...Q",".Q.."]]
Explanation: There exist two distinct solutions to the 4-queens puzzle as shown above

```

 **Example 2:** 

```
Input: n = 1
Output: [["Q"]]

```

 

 **Constraints:** 

- 1 <= n <= 9

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 72.90%)  
**Memory:** 11.3 MB (beats 23.21%)  
**Submitted:** 2026-09-22T09:22:39.838Z  

```cpp
class Solution {
public:
    bitset<30>cl,dl,dr;
    void bkt(vector<vector<string>>&ans,vector<string>&chs,int r,int &n)
    {
        if(r >= n)
        {
            ans.push_back(chs);
            return;
        }
        for(int i = 0; i < n; i++)
        {
            if(!cl[i] && !dl[r + i] && !dr[r - i + n - 1])
            {
                chs[r][i] = 'Q';
                cl[i] = dl[r + i] = dr[r - i + n - 1] = 1;
                bkt(ans,chs,r + 1,n);
                chs[r][i] = '.';
                cl[i] = dl[r + i] = dr[r - i + n - 1] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>chs;
        string s = "";
        for(int i = 0; i < n; i++) s+='.';
        for(int i = 0; i < n; i++) chs.push_back(s);
        bkt(ans,chs,0,n);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/n-queens/)