# Rotating the Box

![Difficulty](https://img.shields.io/badge/Difficulty-1536-red)

## Problem

You are given an `m x n` matrix of characters `boxGrid` representing a side-view of a box. Each cell of the box is one of the following:

- A stone '#'
- A stationary obstacle '*'
- Empty '.'

The box is rotated  **90 degrees clockwise**, causing some of the stones to fall due to gravity. Each stone falls down until it lands on an obstacle, another stone, or the bottom of the box. Gravity  **does not**  affect the obstacles' positions, and the inertia from the box's rotation  **does not** affect the stones' horizontal positions.

It is  **guaranteed**  that each stone in `boxGrid` rests on an obstacle, another stone, or the bottom of the box.

Return  *an* `n x m` *matrix representing the box after the rotation described above*.

 

 **Example 1:** 

```
Input: boxGrid = [["#",".","#"]]
Output: [["."],
         ["#"],
         ["#"]]

```

 **Example 2:** 

```
Input: boxGrid = [["#",".","*","."],
              ["#","#","*","."]]
Output: [["#","."],
         ["#","#"],
         [" *","* "],
         [".","."]]

```

 **Example 3:** 

```
Input: boxGrid = [["#","#"," *",".","* ","."],
              ["#","#","#","*",".","."],
              ["#","#","#",".","#","."]]
Output: [[".","#","#"],
         [".","#","#"],
         ["#","#","*"],
         ["#","*","."],
         ["#",".","*"],
         ["#",".","."]]

```

 

 **Constraints:** 

- m == boxGrid.length
- n == boxGrid[i].length
- 1 <= m, n <= 500
- boxGrid[i][j] is either '#', '*', or '.'.

## Solution

**Language:** C++  
**Runtime:** 15 ms (beats 43.96%)  
**Memory:** 60.8 MB (beats 6.79%)  
**Submitted:** 2026-07-16T14:22:01.970Z  

```cpp
class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& bg) {
        int lst = 0;
        int m = bg.size();
        int n = bg[0].size();
        int k;
        for(int i = 0; i < m; i++)
        {
            lst = 0;
            for(int j = 0; j < n; j++)
            {
                if(bg[i][j] == '*')
                {
                    k = j - 1;
                    while(lst < k)
                    {
                        if(bg[i][k] == '.' && bg[i][lst] == '#')
                        {
                            swap(bg[i][k],bg[i][lst]);
                            k--;
                            lst++;
                        }
                        else if(bg[i][k] == '.' && bg[i][lst] == '.') lst++;
                        else if(bg[i][k] == '#' && bg[i][lst] == '#') k--;
                        else
                        {
                            lst++;
                            k--;
                        }
                    }
                    lst = j + 1;
                }
                else if(j == n - 1)
                {
                    k = j;
                    while(lst < k)
                    {
                        if(bg[i][k] == '.' && bg[i][lst] == '#')
                        {
                            swap(bg[i][k],bg[i][lst]);
                            k--;
                            lst++;    
                        }
                        else if(bg[i][k] == '.' && bg[i][lst] == '.') lst++;
                        else if(bg[i][k] == '#' && bg[i][lst] == '#') k--;
                        else
                        {
                            lst++;
                            k--;
                        }
                    }
                    lst = j;
                }
            }
        }
        vector<vector<char>>ans;
        for(int i = 0; i < n; i++)
        {
            vector<char>row;
            for(int j = m - 1; j >= 0; j--) row.push_back(bg[j][i]);
            ans.push_back(row);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/rotating-the-box/)