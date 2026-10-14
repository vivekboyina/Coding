# Three Fibonacci Sum

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given an integer `n`.

The  **Fibonacci sequence**  starts with 0 and 1, and each subsequent number is the sum of the previous two numbers. Its first few terms are `0, 1, 1, 2, 3, 5, 8, 13,...`.

Return `true` if `n` can be expressed as the sum of  **three consecutive terms**  in the Fibonacci sequence, and `false` otherwise.

 

 **Example 1:** 

 **Input:**  n = 16

 **Output:**  true

 **Explanation:** 

The three consecutive terms 3, 5, and 8 have a sum of `3 + 5 + 8 = 16`.

 **Example 2:** 

 **Input:**  n = 8

 **Output:**  false

 **Explanation:** 

Although `1 + 2 + 5 = 8`, these terms are not consecutive in the Fibonacci sequence. No three consecutive terms have a sum of 8.

 **Example 3:** 

 **Input:**  n = 2

 **Output:**  true

 **Explanation:** 

The first three terms have a sum of `0 + 1 + 1 = 2`.

 

 **Constraints:** 

- 1 <= n <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.9 MB (beats 21.32%)  
**Submitted:** 2026-10-14T12:32:59.545Z  

```cpp
class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long a = 0;
        long long b = 1;
        long long c = 1;
        long long sum = 0;
        long long tmp;
        while(sum < n)
        {
            sum = a + b + c;
            if(sum == n) return true;
            else if(sum > n) return false;
            tmp = b + c;
            a = b;
            b = c;
            c = tmp;
        }
        return (sum == n);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/three-fibonacci-sum/)