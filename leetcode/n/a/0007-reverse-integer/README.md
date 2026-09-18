# Reverse Integer

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given a signed 32-bit integer `x`, return `x` *with its digits reversed*. If reversing `x` causes the value to go outside the signed 32-bit integer range `[-231, 231 - 1]`, then return `0`.

 **Assume the environment does not allow you to store 64-bit integers (signed or unsigned).** 

 

 **Example 1:** 

```
Input: x = 123
Output: 321

```

 **Example 2:** 

```
Input: x = -123
Output: -321

```

 **Example 3:** 

```
Input: x = 120
Output: 21

```

 

 **Constraints:** 

- -231 <= x <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.6 MB (beats 20.47%)  
**Submitted:** 2026-09-18T16:06:28.705Z  

```cpp
class Solution {
public:
    int reverse(int x) {
        if(x >= INT_MAX || x <= INT_MIN) return 0;
        long long reverse = 0;
        while(x)
        {
            int k = x % 10;
            reverse = reverse*10 + k;
            if(reverse >= INT_MAX || reverse <= INT_MIN) return 0;
            x/=10;
        }
        return reverse;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-integer/)