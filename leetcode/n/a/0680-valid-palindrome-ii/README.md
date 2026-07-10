# Valid Palindrome II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a string `s`, return `true`  *if the* `s` *can be palindrome after deleting  **at most one**  character from it*.

 

 **Example 1:** 

```
Input: s = "aba"
Output: true

```

 **Example 2:** 

```
Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.

```

 **Example 3:** 

```
Input: s = "abc"
Output: false

```

 

 **Constraints:** 

- 1 <= s.length <= 105
- s consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 74.44%)  
**Memory:** 26.6 MB (beats 27.21%)  
**Submitted:** 2026-07-10T12:56:21.411Z  

```cpp
class Solution {
public:
    bool pal(string s,int i,int j)
    {
        while(i < j)
        {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i < j)
        {
            if(s[i] != s[j]) return pal(s,i + 1,j) || pal(s,i,j - 1);
            i++;
            j--;
        }
        return true;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome-ii/)