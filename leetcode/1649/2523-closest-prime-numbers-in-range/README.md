# Closest Prime Numbers in Range

![Difficulty](https://img.shields.io/badge/Difficulty-1649-red)

## Problem

Given two positive integers `left` and `right`, find the two integers `num1` and `num2` such that:

- left <= num1 < num2 <= right.
- Both num1 and num2 are prime numbers.
- num2 - num1 is the minimum amongst all other pairs satisfying the above conditions.

Return the positive integer array `ans = [num1, num2]`. If there are multiple pairs satisfying these conditions, return the one with the  **smallest**  `num1` value. If no such numbers exist, return `[-1, -1]` *.* 

 

 **Example 1:** 

```
Input: left = 10, right = 19
Output: [11,13]
Explanation: The prime numbers between 10 and 19 are 11, 13, 17, and 19.
The closest gap between any pair is 2, which can be achieved by [11,13] or [17,19].
Since 11 is smaller than 17, we return the first pair.

```

 **Example 2:** 

```
Input: left = 4, right = 6
Output: [-1,-1]
Explanation: There exists only one prime number in the given range, so the conditions cannot be satisfied.

```

 

 **Constraints:** 

- 1 <= left <= right <= 106

## Solution

**Language:** C++  
**Runtime:** 7 ms  
**Memory:** 8.3 MB  
**Submitted:** 2026-08-25T10:25:43.189Z  

```cpp
vector<bool>prm(1000001,true);
class Solution {
public:
    void prime()
    {
        prm[0] = false;
        prm[1] = false;
        for(int i = 2; i*i <= 1000000; i++)
        {
            if(prm[i] == true) for(int j = i + i; j <= 1000000; j+=i) prm[j] = false;
        }
    }
    vector<int> closestPrimes(int st, int nd) {
        static bool flag = true;
        if(flag)
        {
            flag = false;
            prime();
        }
        int l = -1;
        int r = -1;
        int dis = INT_MAX;
        vector<int>ans(2,-1);
        for(int i = st; i <= nd; i++)
        {
            if(l == -1 && prm[i]) l = i;
            else if(r == -1 && prm[i]) r = i;
            else if(prm[i])
            {
                l = r;
                r = i;
            }
            if(l != -1 & r != -1 && abs(l - r) < dis)
            {
                dis = abs(l - r);
                ans[0] = l;
                ans[1] = r;
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/closest-prime-numbers-in-range/)