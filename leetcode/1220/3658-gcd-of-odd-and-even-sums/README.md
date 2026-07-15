# GCD of Odd and Even Sums

![Difficulty](https://img.shields.io/badge/Difficulty-1220-red)

## Problem

You are given an integer `n`. Your task is to compute the  **GCD**  (greatest common divisor) of two values:

- sumOdd: the sum of the smallest n positive odd numbers.
- sumEven: the sum of the smallest n positive even numbers.

Return the GCD of `sumOdd` and `sumEven`.

 

 **Example 1:** 

 **Input:**  n = 4

 **Output:**  4

 **Explanation:** 

- Sum of the first 4 odd numbers sumOdd = 1 + 3 + 5 + 7 = 16
- Sum of the first 4 even numbers sumEven = 2 + 4 + 6 + 8 = 20

Hence, `GCD(sumOdd, sumEven) = GCD(16, 20) = 4`.

 **Example 2:** 

 **Input:**  n = 5

 **Output:**  5

 **Explanation:** 

- Sum of the first 5 odd numbers sumOdd = 1 + 3 + 5 + 7 + 9 = 25
- Sum of the first 5 even numbers sumEven = 2 + 4 + 6 + 8 + 10 = 30

Hence, `GCD(sumOdd, sumEven) = GCD(25, 30) = 5`.

 

 **Constraints:** 

- 1 <= n <= 10​​​​​​​00

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.5 MB (beats 46.67%)  
**Submitted:** 2026-07-15T04:26:50.891Z  

```cpp
class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e = 0,o = 0;
        for(int i = 0; i < n*2; i++)
            {
                if(i % 2 == 0) e+=i;
                else if(i % 2 == 1) o+=i;
            }
        return __gcd(o,e);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/gcd-of-odd-and-even-sums/)