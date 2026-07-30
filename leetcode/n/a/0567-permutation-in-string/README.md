# Permutation in String

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given two strings `s1` and `s2`, return `true` if `s2` contains a permutation of `s1`, or `false` otherwise.

In other words, return `true` if one of `s1`'s permutations is the substring of `s2`.

 

 **Example 1:** 

```
Input: s1 = "ab", s2 = "eidbaooo"
Output: true
Explanation: s2 contains one permutation of s1 ("ba").

```

 **Example 2:** 

```
Input: s1 = "ab", s2 = "eidboaoo"
Output: false

```

 

 **Constraints:** 

- 1 <= s1.length, s2.length <= 104
- s1 and s2 consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.8 MB (beats 89.87%)  
**Submitted:** 2026-07-30T06:34:41.718Z  

```cpp
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        if(n > s2.size()) return false;
        vector<int>a(26),b(26);
        for(char i : s1) a[i - 'a']+=1;
        for(int i = 0; i < n; i++) b[s2[i] - 'a']+=1;
        if(a == b) return true;
        for(int i = n; i < s2.length(); i++)
        {
            b[s2[i - n] - 'a']-=1;
            b[s2[i] - 'a']+=1;
            if(a == b) return true;
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/permutation-in-string/)