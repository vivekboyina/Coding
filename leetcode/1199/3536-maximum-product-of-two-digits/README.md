# Maximum Product of Two Digits

![Difficulty](https://img.shields.io/badge/Difficulty-1199-red)

## Problem

You are given a positive integer `n`.

Return the  **maximum**  product of any two digits in `n`.

 **Note:**  You may use the  **same**  digit twice if it appears more than once in `n`.

 

 **Example 1:** 

 **Input:**  n = 31

 **Output:**  3

 **Explanation:** 

- The digits of n are [3, 1].
- The possible products of any two digits are: 3 * 1 = 3.
- The maximum product is 3.

 **Example 2:** 

 **Input:**  n = 22

 **Output:**  4

 **Explanation:** 

- The digits of n are [2, 2].
- The possible products of any two digits are: 2 * 2 = 4.
- The maximum product is 4.

 **Example 3:** 

 **Input:**  n = 124

 **Output:**  8

 **Explanation:** 

- The digits of n are [1, 2, 4].
- The possible products of any two digits are: 1  *2 = 2, 1*  4 = 4, 2 * 4 = 8.
- The maximum product is 8.

 

 **Constraints:** 

- 10 <= n <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 74.03%)  
**Submitted:** 2026-07-25T05:41:30.859Z  

```cpp
class Solution {
public:
    int maxProduct(int n) {
        int n1 = INT_MIN;
        int n2 = INT_MIN;
        int d;
        while(n)
        {
            d = n % 10;
            n/=10;
            if(d > n1)
            {
                n2 = n1;
                n1 = d;
            }
            else if(d <= n1 && d > n2) n2 = d;
        }
        return n1*n2;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-of-two-digits/)