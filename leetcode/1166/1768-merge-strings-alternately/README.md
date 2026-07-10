# Merge Strings Alternately

![Difficulty](https://img.shields.io/badge/Difficulty-1166-red)

## Problem

You are given two strings `word1` and `word2`. Merge the strings by adding letters in alternating order, starting with `word1`. If a string is longer than the other, append the additional letters onto the end of the merged string.

Return  *the merged string.* 

 

 **Example 1:** 

```
Input: word1 = "abc", word2 = "pqr"
Output: "apbqcr"
Explanation: The merged string will be merged as so:
word1:  a   b   c
word2:    p   q   r
merged: a p b q c r

```

 **Example 2:** 

```
Input: word1 = "ab", word2 = "pqrs"
Output: "apbqrs"
Explanation: Notice that as word2 is longer, "rs" is appended to the end.
word1:  a   b 
word2:    p   q   r   s
merged: a p b q   r   s

```

 **Example 3:** 

```
Input: word1 = "abcd", word2 = "pq"
Output: "apbqcd"
Explanation: Notice that as word1 is longer, "cd" is appended to the end.
word1:  a   b   c   d
word2:    p   q 
merged: a p b q c   d

```

 

 **Constraints:** 

- 1 <= word1.length, word2.length <= 100
- word1 and word2 consist of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 4 ms (beats 32.05%)  
**Memory:** 8.4 MB (beats 84.18%)  
**Submitted:** 2026-07-10T13:03:07.244Z  

```cpp
class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i = 0;
        int n1 = w1.length();
        int n2 = w2.length();
        string ans = "";
        while(i < n1 && i < n2)
        {
            ans+=w1[i];
            ans+=w2[i];
            i++;
        }
        while(i < n1) ans+=w1[i++];
        while(i < n2) ans+=w2[i++];
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/merge-strings-alternately/)