# Rightmost different bit

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

 **Constraints:** 
0 ≤ m, n ≤ 109

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-30T07:18:32.718Z  

```cpp
class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        //  code here
        if(m == n) return -1;
        int mn = m ^ n;
        int ans = 0;
        while(mn)
        {
            ans+=1;
            if(mn & 1 == 1) break;
            mn = mn >> 1;
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/rightmost-different-bit-1587115621/1)