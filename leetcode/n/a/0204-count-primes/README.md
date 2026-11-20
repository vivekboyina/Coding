# Count Primes

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer `n`, return  *the number of prime numbers that are strictly less than*  `n`.

 

 **Example 1:** 

```
Input: n = 10
Output: 4
Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

```

 **Example 2:** 

```
Input: n = 0
Output: 0

```

 **Example 3:** 

```
Input: n = 1
Output: 0

```

 

 **Constraints:** 

- 0 <= n <= 5 * 106

## Solution

**Language:** C++  
**Runtime:** 434 ms (beats 12.18%)  
**Memory:** 8.6 MB (beats 99.59%)  
**Submitted:** 2026-08-25T09:41:35.084Z  

```cpp
vector<bool>prms(5000001,true);
class Solution {
public:
    void sieve()
    {
        for(int i = 2; i*i <= 5000000; i++)
        {
            if(prms[i] == true) for(int j = i*i; j <= 5000000; j+=i) prms[j] = false;
        }
    }
    int countPrimes(int n) {
        if(n < 2) return 0;
        static bool flag = true;
        if(flag)
        {
            flag = false;
            sieve();
        }
        long long ans = 0;
        for(int i = 2; i <  n; i++) if(prms[i]) ans+=1;
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)