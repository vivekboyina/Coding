# 2 Keys Keyboard

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

There is only one character `'A'` on the screen of a notepad. You can perform one of two operations on this notepad for each step:

- Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
- Paste: You can paste the characters which are copied last time.

Given an integer `n`, return  *the minimum number of operations to get the character*  `'A'`  *exactly*  `n`  *times on the screen*.

 

 **Example 1:** 

```
Input: n = 3
Output: 3
Explanation: Initially, we have one character 'A'.
In step 1, we use Copy All operation.
In step 2, we use Paste operation to get 'AA'.
In step 3, we use Paste operation to get 'AAA'.

```

 **Example 2:** 

```
Input: n = 1
Output: 0

```

 

 **Constraints:** 

- 1 <= n <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.8 MB (beats 34.49%)  
**Submitted:** 2026-08-12T06:46:04.749Z  

```cpp
class Solution {
public:
    int minSteps(int n) {
        if(n == 1) return 0;
        int ans = n;
        vector<int>dp(n + 1,INT_MAX);
        for(int i = 2; i <= n; i++)
        {
            dp[i] = min(dp[i],i);
            for(int j = i + i; j <= n; j+=i)
            {
                dp[j] = min(j,dp[i] + j/i);
            }
        }
        return dp[n];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/2-keys-keyboard/)