# Letter Case Permutation

![Difficulty](https://img.shields.io/badge/Difficulty-1341-red)

## Problem

Given a string `s`, you can transform every letter individually to be lowercase or uppercase to create another string.

Return  *a list of all possible strings we could create*. Return the output in  **any order**.

 

 **Example 1:** 

```
Input: s = "a1b2"
Output: ["a1b2","a1B2","A1b2","A1B2"]

```

 **Example 2:** 

```
Input: s = "3z4"
Output: ["3z4","3Z4"]

```

 

 **Constraints:** 

- 1 <= s.length <= 12
- s consists of lowercase English letters, uppercase English letters, and digits.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 15.3 MB (beats 37.74%)  
**Submitted:** 2026-08-25T06:06:19.711Z  

```cpp
class Solution {
public:
    void bkt(int i,vector<string>& ans,string& k,string s)
    {
        if(k.length() == s.length())
        {
            ans.push_back(k);
            return;
        }
        if(isalpha(s[i]))
        {
            k.push_back(tolower(s[i]));
            bkt(i + 1,ans,k,s);
            k.pop_back();
            k.push_back(toupper(s[i]));
            bkt(i + 1,ans,k,s);
            k.pop_back();
        }
        else
        {
            k.push_back(s[i]);
            bkt(i + 1,ans,k,s);
            k.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string k = "";
        bkt(0,ans,k,s);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/letter-case-permutation/)