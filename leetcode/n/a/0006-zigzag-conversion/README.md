# Zigzag Conversion

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

The string `"PAYPALISHIRING"` is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

```
P   A   H   N
A P L S I I G
Y   I   R

```

And then read line by line: `"PAHNAPLSIIGYIR"`

Write the code that will take a string and make this conversion given a number of rows:

```
string convert(string s, int numRows);

```

 

 **Example 1:** 

```
Input: s = "PAYPALISHIRING", numRows = 3
Output: "PAHNAPLSIIGYIR"

```

 **Example 2:** 

```
Input: s = "PAYPALISHIRING", numRows = 4
Output: "PINALSIGYAHRPI"
Explanation:
P     I    N
A   L S  I G
Y A   H R
P     I

```

 **Example 3:** 

```
Input: s = "A", numRows = 1
Output: "A"

```

 

 **Constraints:** 

- 1 <= s.length <= 1000
- s consists of English letters (lower-case and upper-case), ',' and '.'.
- 1 <= numRows <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 11 MB (beats 91.00%)  
**Submitted:** 2026-07-13T12:12:48.015Z  

```cpp
class Solution {
public:
    string convert(string s, int nr) {
        if(nr == 1) return s;
        string ans = "";
        const int n = nr*2 - 2;
        int k = nr*2 - 2;
        int p = 0;
        for(int i = 0; i < nr; i++)
        {
            if(i > 0 && i < nr - 1)
            {
                for(int j = i; j < s.length(); j+=n)
                {
                    ans+=s[j];
                    if(j + k < s.length()) ans+=s[j + k];
                }
            }
            else
            {
                for(int j = i; j < s.length(); j+=n)
                {
                    ans+=s[j];
                    if(n == 0) break;
                }
            }
            k-=2;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/zigzag-conversion/)