# Sum of Square Numbers

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a non-negative integer `c`, decide whether there're two integers `a` and `b` such that `a2 + b2 = c`.

 

 **Example 1:** 

```
Input: c = 5
Output: true
Explanation: 1  *1 + 2*  2 = 5

```

 **Example 2:** 

```
Input: c = 3
Output: false

```

 

 **Constraints:** 

- 0 <= c <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 7.8 MB (beats 21.55%)  
**Submitted:** 2026-09-26T06:23:02.293Z  

```cpp
class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        long long mul;
        while(i <= j)
        {
            mul = i*i*1LL + j*j*1LL;
            if(mul > c) j--;
            else if(mul < c) i++;
            else return true;
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sum-of-square-numbers/)