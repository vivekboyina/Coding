# Decode String

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an encoded string, return its decoded string.

The encoding rule is: `k[encoded_string]`, where the `encoded_string` inside the square brackets is being repeated exactly `k` times. Note that `k` is guaranteed to be a positive integer.

You may assume that the input string is always valid; there are no extra white spaces, square brackets are well-formed, etc. Furthermore, you may assume that the original data does not contain any digits and that digits are only for those repeat numbers, `k`. For example, there will not be input like `3a` or `2[4]`.

The test cases are generated so that the length of the output will never exceed `105`.

 

 **Example 1:** 

```
Input: s = "3[a]2[bc]"
Output: "aaabcbc"

```

 **Example 2:** 

```
Input: s = "3[a2[c]]"
Output: "accaccacc"

```

 **Example 3:** 

```
Input: s = "2[abc]3[cd]ef"
Output: "abcabccdcdcdef"

```

 

 **Constraints:** 

- 1 <= s.length <= 30
- s consists of lowercase English letters, digits, and square brackets '[]'.
- s is guaranteed to be a valid input.
- All the integers in s are in the range [1, 300].

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 90.50%)  
**Submitted:** 2026-07-21T01:03:10.378Z  

```cpp
class Solution {
public:
    void complete(stack<char>& st)
    {
        string k = "";
        while(!st.empty() && st.top() != '[')
        {
            k+=st.top();
            st.pop();
        }
        if(!st.empty() && st.top() == '[') st.pop();
        string num = "";
        while(!st.empty() && st.top() >= '0' && st.top() <= '9')
        {
            num+=st.top();
            st.pop();
        }
        reverse(num.begin(),num.end());
        int n = stoi(num);
        string c = k;
        for(int i = 1; i < n; i++) k+=c;
        for(int i = k.length() - 1; i >= 0; i--) st.push(k[i]);
    }
    string decodeString(string s) {
        stack<char>st;
        for(char i : s)
        {
            if(i == ']') complete(st);
            else st.push(i);
        }
        string ans = "";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/decode-string/)