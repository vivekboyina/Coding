# Maximize Active Section with Trade I

![Difficulty](https://img.shields.io/badge/Difficulty-1729-red)

## Problem

You are given a binary string `s` of length `n`, where:

- '1' represents an active section.
- '0' represents an inactive section.

You can perform  **at most one trade**  to maximize the number of active sections in `s`. In a trade, you:

- Convert a contiguous block of '1's that is surrounded by '0's to all '0's.
- Afterward, convert a contiguous block of '0's that is surrounded by '1's to all '1's.

Return the  **maximum**  number of active sections in `s` after making the optimal trade.

 **Note:**  Treat `s` as if it is  **augmented**  with a `'1'` at both ends, forming `t = '1' + s + '1'`. The augmented `'1'`s  **do not**  contribute to the final count.

 

 **Example 1:** 

 **Input:**  s = "01"

 **Output:**  1

 **Explanation:** 

Because there is no block of `'1'`s surrounded by `'0'`s, no valid trade is possible. The maximum number of active sections is 1.

 **Example 2:** 

 **Input:**  s = "0100"

 **Output:**  4

 **Explanation:** 

- String "0100" → Augmented to "101001".
- Choose "0100", convert "101001" → "100001" → "111111".
- The final string without augmentation is "1111". The maximum number of active sections is 4.

 **Example 3:** 

 **Input:**  s = "1000100"

 **Output:**  7

 **Explanation:** 

- String "1000100" → Augmented to "110001001".
- Choose "000100", convert "110001001" → "110000001" → "111111111".
- The final string without augmentation is "1111111". The maximum number of active sections is 7.

 **Example 4:** 

 **Input:**  s = "01010"

 **Output:**  4

 **Explanation:** 

- String "01010" → Augmented to "1010101".
- Choose "010", convert "1010101" → "1000101" → "1111101".
- The final string without augmentation is "11110". The maximum number of active sections is 4.

 

 **Constraints:** 

- 1 <= n == s.length <= 105
- s[i] is either '0' or '1'

## Solution

**Language:** C++  
**Runtime:** 82 ms (beats 42.79%)  
**Memory:** 54.9 MB (beats 58.56%)  
**Submitted:** 2026-07-21T14:53:46.849Z  

```cpp
class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones=0,l=0,r=0;
        for(char ch:s) if(ch == '1') ones++;
        int ans = ones;
        while(r < s.size() && s[r] == '1') {
            r++;
        }
        while(r < s.size()) {
            int lzero=0,mones=0,rzero=0;
            while(s[r] == '0') {
                lzero++;
                r++;
            }
            while(s[r] == '1') {
                mones++;
                r++;
            }
            if(mones == 0) break;
            int rstart = r;
            while(s[r] == '0') {
                rzero++;
                r++;
            }
            if(lzero > 0 && rzero > 0) {
                int win = lzero+mones+rzero;
                ans = max(ans,ones-mones+win);
            }
            r = rstart;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximize-active-section-with-trade-i/)