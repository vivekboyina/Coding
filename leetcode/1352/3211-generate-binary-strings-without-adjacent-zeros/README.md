# Generate Binary Strings Without Adjacent Zeros

![Difficulty](https://img.shields.io/badge/Difficulty-1352-red)

## Problem

You are given a positive integer `n`.

A binary string `x` is  **valid**  if all substrings of `x` of length 2 contain  **at least**  one `"1"`.

Return all  **valid**  strings with length `n` **,** in  *any*  order.

 

 **Example 1:** 

 **Input:**  n = 3

 **Output:**  ["010","011","101","110","111"]

 **Explanation:** 

The valid strings of length 3 are: `"010"`, `"011"`, `"101"`, `"110"`, and `"111"`.

 **Example 2:** 

 **Input:**  n = 1

 **Output:**  ["0","1"]

 **Explanation:** 

The valid strings of length 1 are: `"0"` and `"1"`.

 

 **Constraints:** 

- 1 <= n <= 18

## Solution

**Language:** C++  
**Runtime:** 34 ms (beats 7.77%)  
**Memory:** 13.8 MB (beats 99.62%)  
**Submitted:** 2026-08-03T13:16:30.059Z  

```cpp
class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string>ans;
        string s;
        int cnt;
        for(int i = 0; i < (1 << n); i++)
        {
            s = "";
            cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(i & (1 << j))
                {
                    s+='1';
                    cnt = 0;
                }
                else
                {
                    cnt++;
                    s+='0';
                }
                if(cnt > 1) break;
            }
            if(cnt < 2) ans.push_back(s);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/generate-binary-strings-without-adjacent-zeros/)