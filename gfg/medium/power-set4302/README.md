# All Subsequences of a String

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given a string  **s**, generate all possible subsequences of the string (including the empty subsequence) and return them in  **lexicographical** order.

A subsequence is obtained by deleting zero or more characters from the string without changing the relative order of the remaining characters.

 **Examples:** 

```
Input : s = "abc"
Output: ["","a", "ab", "abc", "ac", "b", "bc", "c"]
Explanation: There are a total of 8 non-empty subsequences for the given string. 
These subsequences are listed above in lexicographical order.

```

```
Input: s = "aa"
Output: ["", "a", "a", "aa"]

```

**Constraints:
**1 ≤ n ≤ 16
s consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-08T02:50:26.380Z  

```cpp
class Solution {
  public:
    void rec(vector<string>& ans,string s,string sub,int i)
    {
        if(i >= s.length())
        {
            ans.push_back(sub);
            return;
        }
        rec(ans,s,sub + s[i],i + 1);
        rec(ans,s,sub,i + 1);
    }
    vector<string> powerSet(string &s) {
        // Code here
        vector<string>ans;
        rec(ans,s,"",0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/power-set4302/1)