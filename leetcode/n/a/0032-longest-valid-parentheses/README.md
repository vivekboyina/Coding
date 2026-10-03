# Longest Valid Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a string containing just the characters `'('` and `')'`, return  *the length of the longest valid (well-formed) parentheses **substring*.

 

 **Example 1:** 

```
Input: s = "(()"
Output: 2
Explanation: The longest valid parentheses substring is "()".

```

 **Example 2:** 

```
Input: s = ")()())"
Output: 4
Explanation: The longest valid parentheses substring is "()()".

```

 **Example 3:** 

```
Input: s = ""
Output: 0

```

 

 **Constraints:** 

- 0 <= s.length <= 3 * 104
- s[i] is '(', or ')'.

## Solution

**Language:** C++  
**Runtime:** 6 ms (beats 10.88%)  
**Memory:** 13.8 MB (beats 5.65%)  
**Submitted:** 2026-10-03T06:20:27.958Z  

```cpp
class Solution {
public:
    int longestValidParentheses(string s) {
        vector<bool>ss(s.length(),false);
        stack<pair<char,int>>st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ')' && !st.empty() && st.top().first == '(')
            {
                ss[st.top().second] = true;
                ss[i] = true;
                st.pop();
            }
            else if(s[i] == '(') st.push({s[i],i});
        }
        int ans = 0,maxy = 0;
        for(bool i : ss)
        {
            if(i == false) ans = 0;
            else ans+=1;
            maxy = max(ans,maxy);
        }
        return maxy;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-valid-parentheses/)