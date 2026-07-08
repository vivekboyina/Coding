# Subsequence After One Replacement

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given two strings `s` and `t` consisting of lowercase English letters.

You may choose  **at most**  one index in `s` and replace the character at that index with any lowercase English letter.

Return `true` if it is possible to make `s` a subsequence of `t`; otherwise, return `false`.

 

 **Example 1:** 

 **Input:**  s = "cat", t = "chat"

 **Output:**  true

 **Explanation:** 

- Replace s[1] from 'a' to 'h'. The resulting string is "cht".
- "cht" is a subsequence of "chat" because we can match 'c', 'h', and 't' in order.

 **Example 2:** 

 **Input:**  s = "plane", t = "apple"

 **Output:**  false

 **Explanation:** 

- The characters 'p', 'l', and 'e' can be matched in t, but the remaining characters cannot be matched while preserving the required order.
- Even after replacing any one character in s, it is impossible to make s a subsequence of t.

 

 **Constraints:** 

- 1 <= s.length, t.length <= 105
- s and t consist only of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.7 MB  
**Submitted:** 2026-07-08T16:50:11.728Z  

```cpp
class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        vector<bool>fr(26,false);
        int s1 = s.length();
        int t1 = t.length();
        vector<int>ind(s1,-1);
        for(char i : t) fr[i - 'a'] = true;
        int i = 0;
        int j = 0;
        while(i < s1 && j < t1)
        {
            if(!fr[s[i] - 'a'])
            {
                i++;
                continue;
            }
            else if(s[i] == t[j]) ind[i] = j++;
            else
            {
                while(j < t1 && s[i] != t[j]) j++;
                if(s[i] == t[j]) ind[i] = j++;
            }
            i++;
        }
        int cnt = 0;
        for(int i = 0; i < s1; i++)
        {
            if(cnt > 0 && ind[i] == -1) return false;
            else if(ind[i] == -1)
            {
                if(i > 0 && ind[i - 1] == t1 - 1) return false;
                else if(i > 0 && i < s1 - 1 && ind[i + 1] != -1 && ind[i - 1] != -1 && abs(ind[i - 1] - ind[i + 1]) < 2) return false;
                else cnt+=1;
            }
        }
        return cnt < 2;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/subsequence-after-one-replacement/)