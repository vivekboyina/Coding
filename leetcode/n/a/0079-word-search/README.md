# Word Search

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an `m x n` grid of characters `board` and a string `word`, return `true`  *if*  `word`  *exists in the grid*.

The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring. The same letter cell may not be used more than once.

 

 **Example 1:** 

```
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCCED"
Output: true

```

 **Example 2:** 

```
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "SEE"
Output: true

```

 **Example 3:** 

```
Input: board = [["A","B","C","E"],["S","F","C","S"],["A","D","E","E"]], word = "ABCB"
Output: false

```

 

 **Constraints:** 

- m == board.length
- n = board[i].length
- 1 <= m, n <= 6
- 1 <= word.length <= 15
- board and word consists of only lowercase and uppercase English letters.

 

 **Follow up:**  Could you use search pruning to make your solution faster with a larger `board`?

## Solution

**Language:** C++  
**Runtime:** 27 ms (beats 97.79%)  
**Memory:** 10.9 MB (beats 46.97%)  
**Submitted:** 2026-09-28T08:41:23.376Z  

```cpp
class Solution {
public:
    bool rec(int i,int j,int in,vector<vector<char>>& board,string& word)
    {
        if(in==word.size()) return true;
        if(i<0||i>=board.size()||j<0||j>=board[0].size()||board[i][j]!=word[in]) return false;
        char temp=board[i][j];
        board[i][j]='#';
        bool found=rec(i-1,j,in+1,board,word)|| rec(i+1,j,in+1,board,word)|| rec(i,j-1,in+1,board,word)|| rec(i,j+1,in+1,board,word);
        board[i][j]=temp;
        return found;
    }
    bool exist(vector<vector<char>>& board,string word)
    {
        int n=board.size(),m=board[0].size();
        if(word.size()>n*m) return false;
        int bc[256]={};
        int wc[256]={};
        for(auto& row:board) for(char c:row) bc[c]++;
        for(char c:word) wc[c]++;
        for(int i=0;i<256;i++) if(wc[i]>bc[i]) return false;
        for(int i=0;i<n;i++) for(int j=0;j<m;j++) if(board[i][j]==word[0]&&rec(i,j,0,board,word)) return true;
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/word-search/)