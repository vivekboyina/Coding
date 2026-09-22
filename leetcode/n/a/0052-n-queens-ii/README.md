# N-Queens II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

The  **n-queens**  puzzle is the problem of placing `n` queens on an `n x n` chessboard such that no two queens attack each other.

Given an integer `n`, return  *the number of distinct solutions to the  **n-queens puzzle***.

 

 **Example 1:** 

```
Input: n = 4
Output: 2
Explanation: There are two distinct solutions to the 4-queens puzzle as shown.

```

 **Example 2:** 

```
Input: n = 1
Output: 1

```

 

 **Constraints:** 

- 1 <= n <= 9

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 40.32%)  
**Memory:** 9.3 MB (beats 15.37%)  
**Submitted:** 2026-09-22T09:24:17.303Z  

```cpp
class Solution {
public:
    bitset<30>cl,dl,dr;
    void bkt(int &ans,vector<string>&chs,int r,int &n)
    {
        if(r >= n)
        {
            ans+=1;
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
    int totalNQueens(int n) {
        int ans = 0;
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

[View on LeetCode](https://leetcode.com/problems/n-queens-ii/)