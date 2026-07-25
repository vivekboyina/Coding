# Sqrt(x)

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a non-negative integer `x`, return  *the square root of* `x` *rounded down to the nearest integer*. The returned integer should be  **non-negative**  as well.

You  **must not use**  any built-in exponent function or operator.

- For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.

 

 **Example 1:** 

```
Input: x = 4
Output: 2
Explanation: The square root of 4 is 2, so we return 2.

```

 **Example 2:** 

```
Input: x = 8
Output: 2
Explanation: The square root of 8 is 2.82842..., and since we round it down to the nearest integer, 2 is returned.

```

 

 **Constraints:** 

- 0 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.5 MB (beats 50.74%)  
**Submitted:** 2026-07-25T00:49:39.339Z  

```cpp
class Solution {
public:
    int mySqrt(int x) {
        int l = 1;
        int h = x;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(m == x/m) return m;
            else if(m > x/m) h = m - 1;
            else if(m < x/m) l = m + 1;
        }
        return l - 1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sqrtx/)