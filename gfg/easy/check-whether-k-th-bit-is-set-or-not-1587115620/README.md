# Check K-th Bit

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given two positive integer  **n** and   **k**, check if the  **kth**  index bit of  **n** is set or not.
 **Note:** A bit is called set if it is 1. 

 **Examples :** 

```
Input: n = 4, k = 0
Output: false
Explanation: Binary representation of 4 is 100, in which 0th index bit from LSB is not set. So, return false.
```

```
Input: n = 4, k = 2
Output: true
Explanation: Binary representation of 4 is 100, in which 2nd index bit from LSB is set. So, return true.
```

```
Input: n = 500, k = 3
Output: false
Explanation: Binary representation of 500 is 111110100, in which 3rd index bit from LSB is not set. So, return false.
```

 **Constraints:** 
1 ≤ n ≤ 109
0 ≤ k ≤ 31

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-30T07:06:04.587Z  

```cpp
class Solution {
  public:
    bool checkKthBit(int n, int k) {
        //  code here
        return (n & (1 << k)) != 0;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1)