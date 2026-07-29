# Longest Substring Without Repeating Characters

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a string `s`, find the length of the  **longest**   **substring**  without duplicate characters.

 

 **Example 1:** 

```
Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.

```

 **Example 2:** 

```
Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.

```

 **Example 3:** 

```
Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.

```

 

 **Constraints:** 

- 0 <= s.length <= 105
- s consists of English letters, digits, symbols and spaces.

## Solution

**Language:** C++  
**Runtime:** 41 ms (beats 8.43%)  
**Memory:** 19.3 MB (beats 6.94%)  
**Submitted:** 2026-07-29T13:24:33.850Z  

```cpp
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        int l = -1;
        unordered_map<char,int>mp;
        for(int r = 0; r < n; r++)
        {
            if(mp.find(s[r]) != mp.end()) l = max(mp[s[r]],l);
            ans = max(ans,r - l);
            mp[s[r]] = r;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/longest-substring-without-repeating-characters/)