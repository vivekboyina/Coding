# Number of 1 Bits

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a positive integer `n`, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

 

 **Example 1:** 

 **Input:**  n = 11

 **Output:**  3

 **Explanation:** 

The input binary string  **1011**  has a total of three set bits.

 **Example 2:** 

 **Input:**  n = 128

 **Output:**  1

 **Explanation:** 

The input binary string  **10000000**  has a total of one set bit.

 **Example 3:** 

 **Input:**  n = 2147483645

 **Output:**  30

 **Explanation:** 

The input binary string  **1111111111111111111111111111101**  has a total of thirty set bits.

 

 **Constraints:** 

- 1 <= n <= 231 - 1

 

 **Follow up:**  If this function is called many times, how would you optimize it?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.2 MB (beats 48.01%)  
**Submitted:** 2026-09-21T04:53:27.247Z  

```cpp
class Solution {
public:
    int hammingWeight(int n) {
        int cnt = 0;
        while(n)
        {
            cnt+=(n & 1);
            n = n >> 1;
        }
        return cnt;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/number-of-1-bits/)