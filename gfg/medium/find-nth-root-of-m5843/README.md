# Nth Root of M

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

You are given 2 numbers n and m, the task is to find n√m (nth root of m). If the root is not integer then return -1.

 **Examples :** 

```
Input: n = 3, m = 8
Output: 2
Explanation: 23 = 8

```

```
Input: n = 3, m = 9
Output: -1
Explanation: 3rd root of 9 is not integer.
```

```
Input: n = 4, m = 16
Output: 2
Explanation: 24 = 16
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-28T01:43:53.217Z  

```cpp
class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        long long l = 0;
        long long h = INT_MAX;
        long long mi;
        while(l <= h)
        {
            mi = l + (h - l)/2;
            if(pow(mi,n) == m) return mi;
            else if(pow(mi,n) > m) h = mi - 1;
            else l = mi + 1;
        }
        return -1;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-nth-root-of-m5843/1)