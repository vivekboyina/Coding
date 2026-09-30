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
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 13 MB (beats 81.50%)  
**Submitted:** 2026-09-30T01:03:53.992Z  

```cpp
class Solution {
public:
    void rec(int n,int op,int cl,string& s,vector<string>& ans)
    {
        if(op == n && cl == n)
        {
            ans.push_back(s);
            return;
        }
        if(op < n)
        {
            s+='(';
            op++;
            rec(n,op,cl,s,ans);
            s.pop_back();
            op--;
        }
        if(op > cl)
        {
            s+=')';
            cl++;
            rec(n,op,cl,s,ans);
            s.pop_back();
            cl--;
        }
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string>ans;
        int op = 0;
        int cl = 0;
        rec(n,op,cl,s,ans);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-parentheses/)