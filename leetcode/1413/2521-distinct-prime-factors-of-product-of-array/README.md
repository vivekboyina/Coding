# Distinct Prime Factors of Product of Array

![Difficulty](https://img.shields.io/badge/Difficulty-1413-red)

## Problem

Given an array of positive integers `nums`, return  *the number of  **distinct prime factors**  in the product of the elements of*  `nums`.

 **Note**  that:

- A number greater than 1 is called prime if it is divisible by only 1 and itself.
- An integer val1 is a factor of another integer val2 if val2 / val1 is an integer.

 

 **Example 1:** 

```
Input: nums = [2,4,3,7,10,6]
Output: 4
Explanation:
The product of all the elements in nums is: 2  *4*  3  *7*  10  *6 = 10080 = 25*  32  *5*  7.
There are 4 distinct prime factors so we return 4.

```

 **Example 2:** 

```
Input: nums = [2,4,8,16]
Output: 1
Explanation:
The product of all the elements in nums is: 2  *4*  8 * 16 = 1024 = 210.
There is 1 distinct prime factor so we return 1.

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- 2 <= nums[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 11 ms (beats 56.12%)  
**Memory:** 23.2 MB (beats 17.36%)  
**Submitted:** 2026-09-21T04:33:43.216Z  

```cpp
class Solution {
public:
    vector<int> spf;
    vector<int> prs;
    bool built = false;
    void primes() {
        if (built) return;
        built = true;
        spf.resize(1001);
        for (int i = 0; i <= 1000; ++i) spf[i] = i;
        for (int i = 2; i * i <= 1000; ++i) {
            if (spf[i] == i) {
                for (int j = i * i; j <= 1000; j += i) {
                    if (spf[j] == j) spf[j] = i;
                }
            }
        }
        for (int i = 2; i <= 1000; ++i) {
            if (spf[i] == i) prs.push_back(i);
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        primes();
        int ans = 0;
        for (int p : prs) {
            for (int x : nums) {
                if (x % p == 0) {
                    ans+=1;
                    break;
                }
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/distinct-prime-factors-of-product-of-array/)