# Rightmost Different Bit

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two integers  **m**  and  **n**, return the position (1-based from the right) of the rightmost bit where they differ in binary, or -1 if both are identical.

 **Examples:** 

```
Input: m = 11, n = 9
Output: 2
Explanation: Binary representation of the given numbers are: 1011 and 1001, 2nd bit from right is different.
```

```
Input: m = 52, n = 4
Output: 5
Explanation: Binary representation of the given numbers are: 110100 and 0100, 5th-bit from right is different.

```

```
Input: m = 29, n = 15
Output: 2
Explanation: Binary representation of the given numbers are: 29 in binary is 11101, 15 in binary is 01111. The 2nd bit from the right is different.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-21T04:48:09.610Z  

```cpp
class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        if(m == n) return -1;
        int ans = 1;
        while(m > 0 && n > 0)
        {
            if((m & 1) ^ (n & 1) == 1) return ans;
            m = m >> 1;
            n = n >> 1;
            ans+=1;
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1)