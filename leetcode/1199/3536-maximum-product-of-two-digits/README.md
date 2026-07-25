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
**Runtime:** 1 ms (beats 23.15%)  
**Memory:** 8.9 MB (beats 42.30%)  
**Submitted:** 2026-07-25T05:22:06.915Z  

```cpp
class Solution {
public:
    int maxProduct(int n) {
        vector<int>pro;
        while(n)
            {
                int k = n % 10;
                pro.push_back(k);
                n/=10;
            }
        int m = pro.size();
        sort(pro.begin(),pro.end());
        return pro[m - 1]*pro[m - 2];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-product-of-two-digits/)