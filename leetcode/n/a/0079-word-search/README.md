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
**Runtime:** 0 ms  
**Memory:** 8.5 MB  
**Submitted:** 2026-08-15T10:39:17.538Z  

```cpp
class Solution {
public:
    map<pair<int,int>,int>mp;
    bool ans = false;
    void rec(int i,int j,int in,vector<vector<char>>& brd,string s)
    {
        cout << i << " " << j << endl;
        if(in == s.length() - 1 && brd[i][j] == s[in])
        {
            ans = true;
            return;
        }
        if(in == s.length() - 1 && brd[i][j] == in) rec(i,j,in + 1,brd,s);
        else if(brd[i][j] == s[in])
        {   
            mp[{i,j}]++;
            if(i - 1 >= 0 && mp.count({i - 1,j}) == 0 && brd[i - 1][j] == s[in + 1]) rec(i - 1,j,in + 1,brd,s);
            if(j - 1 >= 0 && mp.count({i,j - 1}) == 0 && brd[i][j - 1] == s[in + 1]) rec(i,j - 1,in + 1,brd,s);
            if(j + 1 < brd[0].size() && mp.count({i,j + 1}) == 0 && brd[i][j + 1] == s[in + 1]) rec(i,j + 1,in + 1,brd,s);
            if(i + 1 < brd.size() && mp.count({i + 1,j}) == 0 && brd[i + 1][j] == s[in + 1]) rec(i + 1,j,in + 1,brd,s);
        }
        if(!ans && j + 1 < brd[0].size()) rec(i,j + 1,in,brd,s);
        else if(!ans && i + 1 < brd.size()) rec(i + 1,0,in,brd,s);
    }
    bool exist(vector<vector<char>>& board, string word) {
        rec(0,0,0,board,word);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/word-search/)