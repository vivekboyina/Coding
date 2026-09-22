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
**Memory:** 10 MB (beats 93.75%)  
**Submitted:** 2026-09-22T09:00:07.487Z  

```cpp
class Solution {
public:
    bool valid(int &i,int &j,vector<string>&ans,int &n)
    {
        int ti = i;
        int tj = j;
        while(ti >= 0)
        {
            if(ans[ti][tj] == 'Q') return false;
            ti--;
        }
        ti = i;
        while(ti >= 0 && tj >= 0)
        {
            if(ans[ti][tj] == 'Q') return false;
            ti--;
            tj--;
        }
        ti = i;
        tj = j;
        while(ti >= 0 && tj < n)
        {
            if(ans[ti][tj] == 'Q') return false;
            ti--;
            tj++;
        }
        return true;
    }
    void bkt(vector<vector<string>>&chs,vector<string>&ans,int r,int &n)
    {
        if(r >= n)
        {
            chs.push_back(ans);
            return;
        }
        for(int i = 0; i < n; i++)
        {
            if(valid(r,i,ans,n))
            {
                ans[r][i] = 'Q';
                bkt(chs,ans,r + 1,n);
                ans[r][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>chs;
        vector<string>ans;
        string s = "";
        for(int i = 0; i < n; i++) s+='.';
        for(int i = 0; i < n; i++) ans.push_back(s);
        bkt(chs,ans,0,n);
        return chs;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/n-queens/)