# Letter Combinations of a Phone Number

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a string containing digits from `2-9` inclusive, return all possible letter combinations that the number could represent. Return the answer in  **any order**.

A mapping of digits to letters (just like on the telephone buttons) is given below. Note that 1 does not map to any letters.

 

 **Example 1:** 

```
Input: digits = "23"
Output: ["ad","ae","af","bd","be","bf","cd","ce","cf"]

```

 **Example 2:** 

```
Input: digits = "2"
Output: ["a","b","c"]

```

 

 **Constraints:** 

- 1 <= digits.length <= 4
- digits[i] is a digit in the range ['2', '9'].

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.8 MB (beats 99.08%)  
**Submitted:** 2026-09-28T08:42:50.721Z  

```cpp
class Solution {
public:
    void rec(int in,string& tmp,string& dig,vector<string>& digs,vector<string>& ans)
    {
        if(tmp.length() == dig.length())
        {
            ans.push_back(tmp);
            return;
        }
        int k = (dig[in] - '0') - 2;
        for(int i = 0; i < digs[k].length(); i++)
        {
            tmp.push_back(digs[k][i]);
            rec(in + 1,tmp,dig,digs,ans);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string dig) {
        vector<string>digs(8);
        digs[0] = "abc";
        digs[1] = "def";
        digs[2] = "ghi";
        digs[3] = "jkl";
        digs[4] = "mno";
        digs[5] = "pqrs";
        digs[6] = "tuv";
        digs[7] = "wxyz";
        vector<string>ans;
        string tmp = "";
        rec(0,tmp,dig,digs,ans);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/letter-combinations-of-a-phone-number/)