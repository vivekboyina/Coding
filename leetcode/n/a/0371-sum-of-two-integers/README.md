# Sum of Two Integers

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given two integers `a` and `b`, return  *the sum of the two integers without using the operators*  `+`  *and*  `-`.

 

 **Example 1:** 

```
Input: a = 1, b = 2
Output: 3

```

 **Example 2:** 

```
Input: a = 2, b = 3
Output: 5

```

 

 **Constraints:** 

- -1000 <= a, b <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.8 MB (beats 34.17%)  
**Submitted:** 2026-09-15T13:03:49.966Z  

```cpp
class Solution {
public:
    int getSum(int a, int b) {
        while (b != 0) {
            int carry = (a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sum-of-two-integers/)