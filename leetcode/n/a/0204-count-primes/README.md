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
**Runtime:** 0 ms  
**Memory:** 7.9 MB  
**Submitted:** 2026-08-11T09:10:59.856Z  

```cpp
class Solution {
public:
    void sieve(int n,vector<bool>& prms)
    {
        for(int i = 2; i*i <= n; i++)
        {
            if(prms[i] == true) for(int j = i*i; j <= n; j+=i) prms[j] = false;
        }
    }
    int countPrimes(int n) {
        if(n < 2) return 0;
        vector<bool>prms(n,true);
        prms[0] = false;
        prms[1] = false;
        sieve(n,prms);
        int ans = 0;
        for(bool i : prms) if(i) ans++;
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-primes/)