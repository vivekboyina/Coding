# Digit Frequency Score

![Difficulty](https://img.shields.io/badge/Difficulty-1201-red)

## Problem

You are given an integer `n`.

The  **score**  of `n` is defined as the  **sum**  of `d * freq(d)` over all  **distinct**  digits `d`, where `freq(d)` denotes the number of times the digit `d` appears in `n`.

Return an integer denoting the score of `n`.

 

 **Example 1:** 

 **Input:**  n = 122

 **Output:**  5

 **Explanation:** 

- The digit 1 appears 1 time, contributing 1 * 1 = 1.
- The digit 2 appears 2 times, contributing 2 * 2 = 4.
- Thus, the score of n is 1 + 4 = 5.

 **Example 2:** 

 **Input:**  n = 101

 **Output:**  2

 **Explanation:** 

- The digit 0 appears 1 time, contributing 0 * 1 = 0.
- The digit 1 appears 2 times, contributing 1 * 2 = 2.
- Thus, the score of n is 2.

 

 **Constraints:** 

- 1 <= n <= 109

## Solution

**Language:** C++  
**Runtime:** 3 ms (beats 13.95%)  
**Memory:** 9.1 MB (beats 36.71%)  
**Submitted:** 2026-10-21T15:49:53.075Z  

```cpp
class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0;
        int k;
        unordered_map<int,int>mp;
        while(n)
        {
            k = n % 10;
            n/=10;
            mp[k]++;
        }
        for(auto it : mp) ans+=(it.first*it.second);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/digit-frequency-score/)