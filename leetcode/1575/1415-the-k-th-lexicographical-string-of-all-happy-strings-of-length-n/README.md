# The k-th Lexicographical String of All Happy Strings of Length n

![Difficulty](https://img.shields.io/badge/Difficulty-1575-red)

## Problem

A  **happy string**  is a string that:

- consists only of letters of the set ['a', 'b', 'c'].
- s[i] != s[i + 1] for all values of i from 1 to s.length - 1 (string is 1-indexed).

For example, strings  **"abc", "ac", "b"**  and  **"abcbabcbcb"**  are all happy strings and strings  **"aa", "baa"**  and  **"ababbc"**  are not happy strings.

Given two integers `n` and `k`, consider a list of all happy strings of length `n` sorted in lexicographical order.

Return  *the kth string*  of this list or return an  **empty string**  if there are less than `k` happy strings of length `n`.

 

 **Example 1:** 

```
Input: n = 1, k = 3
Output: "c"
Explanation: The list ["a", "b", "c"] contains all happy strings of length 1. The third string is "c".

```

 **Example 2:** 

```
Input: n = 1, k = 4
Output: ""
Explanation: There are only 3 happy strings of length 1.

```

 **Example 3:** 

```
Input: n = 3, k = 9
Output: "cab"
Explanation: There are 12 different happy string of length 3 ["aba", "abc", "aca", "acb", "bab", "bac", "bca", "bcb", "cab", "cac", "cba", "cbc"]. You will find the 9th string = "cab"

```

 

 **Constraints:** 

- 1 <= n <= 10
- 1 <= k <= 100

## Solution

**Language:** C++  
**Runtime:** 14 ms (beats 37.68%)  
**Memory:** 24.4 MB (beats 32.15%)  
**Submitted:** 2026-08-16T10:43:38.076Z  

```cpp
class Solution {
public:
    void rec(string& s,vector<string>& strs,int in,int k)
    {
        if(s.length() == k)
        {
            strs.push_back(s);
            return;
        }
        for(int i = 0; i < 3; i++)
        {
            if(in > 0 && s[in - 1] != (char)('a' + i))
            {
                s.push_back('a' + i);
                rec(s,strs,in + 1,k);
                s.pop_back();
            }
            else if(in == 0)
            {
                s.push_back('a' + i);
                rec(s,strs,in + 1,k);
                s.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<string>strs;
        string s = "";
        rec(s,strs,0,n);
        if(strs.size() < k) return "";
        return strs[k - 1];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/the-k-th-lexicographical-string-of-all-happy-strings-of-length-n/)