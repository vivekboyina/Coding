# Remove Outermost Parentheses

![Difficulty](https://img.shields.io/badge/Difficulty-1311-red)

## Problem

A valid parentheses string is either empty `""`, `"(" + A + ")"`, or `A + B`, where `A` and `B` are valid parentheses strings, and `+` represents string concatenation.

- For example, "", "()", "(())()", and "(()(()))" are all valid parentheses strings.

A valid parentheses string `s` is primitive if it is nonempty, and there does not exist a way to split it into `s = A + B`, with `A` and `B` nonempty valid parentheses strings.

Given a valid parentheses string `s`, consider its primitive decomposition: `s = P1 + P2 +... + Pk`, where `Pi` are primitive valid parentheses strings.

Return `s`  *after removing the outermost parentheses of every primitive string in the primitive decomposition of* `s`.

 

 **Example 1:** 

```
Input: s = "(()())(())"
Output: "()()()"
Explanation: 
The input string is "(()())(())", with primitive decomposition "(()())" + "(())".
After removing outer parentheses of each part, this is "()()" + "()" = "()()()".

```

 **Example 2:** 

```
Input: s = "(()())(())(()(()))"
Output: "()()()()(())"
Explanation: 
The input string is "(()())(())(()(()))", with primitive decomposition "(()())" + "(())" + "(()(()))".
After removing outer parentheses of each part, this is "()()" + "()" + "()(())" = "()()()()(())".

```

 **Example 3:** 

```
Input: s = "()()"
Output: ""
Explanation: 
The input string is "()()", with primitive decomposition "()" + "()".
After removing outer parentheses of each part, this is "" + "" = "".

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s[i] is either '(' or ')'.
- s is a valid parentheses string.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.1 MB (beats 11.89%)  
**Submitted:** 2026-10-08T16:23:44.602Z  

```cpp
class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans = "";
        int cnt = 0;
        for(char i : s)
        {
            if(st.empty() == true && i == '(') st.push(i);
            else if(st.empty() == false && i == '(' && st.top() == '(')
            {
                cnt+=1;
                ans+='(';             
            }
            else if(st.empty() == false && i == ')' && st.top() == '(' && cnt > 0)
            {
                ans+=')';
                cnt-=1;
            }
            else if(st.empty() == false && i == ')' && st.top() == '(' && cnt == 0) st.pop();
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/remove-outermost-parentheses/)