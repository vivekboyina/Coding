# Generate Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given `n` pairs of parentheses, write a function to  *generate all combinations of well-formed parentheses*.

 

 **Example 1:** 

```
Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]

```

 **Example 2:** 

```
Input: n = 1
Output: ["()"]

```

 

 **Constraints:** 

- 1 <= n <= 8

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 30.66%)  
**Memory:** 16.2 MB (beats 17.96%)  
**Submitted:** 2026-09-15T09:26:01.284Z  

```cpp
class Solution {
public:
    void rec(int n,string s,int op,int cl,vector<string>& ans)
    {
        if(op == n && cl == n)
        {
            ans.push_back(s);
            return;
        }
        if(op < n)
        {
            s.push_back('(');
            rec(n,s,op + 1,cl,ans);
            s.pop_back();
        }
        if(op > cl)
        {
            s.push_back(')');
            rec(n,s,op,cl + 1,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        rec(n,"",0,0,ans);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)