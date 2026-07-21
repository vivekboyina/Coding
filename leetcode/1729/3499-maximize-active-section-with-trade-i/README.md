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
**Runtime:** 0 ms  
**Memory:** 8.3 MB  
**Submitted:** 2026-07-21T12:56:53.081Z  

```cpp
class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();
        vector<int>pf(n,-1);
        vector<int>sf(n,-1);
        int one = -1;
        bool z = false;
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == '1') one = i;
            else z = true;
            sf[i] = one;
        }
        if(one == -1) return 0;
        if(!z) return n;
        one = -1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1') one = i;
            pf[i] = one;
        }
        int st = -1;
        int nd = -1;
        int dis = INT_MIN;
        for(int i = 1; i < n - 1; i++)
        {
            if(s[i] == '1')
            {
                if(sf[i + 1] == -1 && pf[i - 1] == -1)
                {
                    st = 0;
                    nd = n;
                }
                else if(sf[i + 1] != -1 && pf[i - 1] == -1)
                {
                    if(sf[i + 1] > dis)
                    {
                        dis = sf[i + 1];
                        st = 0;
                        nd = sf[i + 1];
                    }
                }
                else if(sf[i + 1] == -1 && pf[i - 1] != -1)
                {
                    if(n - 1 - pf[i - 1] > dis)
                    {
                        dis = n - 1 - pf[i - 1];
                        st = pf[i - 1];
                        nd = n - 1;
                    }
                }
                else
                {
                    if(sf[i + 1] - pf[i - 1] > dis)
                    {
                        dis = sf[i + 1] - pf[i - 1];
                        st = pf[i - 1];
                        nd = sf[i + 1];
                    }
                }
            }
        }
        if(st != -1 && nd != -1) for(int i = st; i <= nd; i++) s[i] = '1';
        int ans = 0;
        for(char i : s) if(i == '1') ans+=1;
        cout << s;
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximize-active-section-with-trade-i/)