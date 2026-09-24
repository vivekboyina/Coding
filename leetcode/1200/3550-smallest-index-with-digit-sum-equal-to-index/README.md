# Smallest Index With Digit Sum Equal to Index

![Difficulty](https://img.shields.io/badge/Difficulty-1200-red)

## Problem

You are given an integer array `nums`.

Return the  **smallest**  index `i` such that the sum of the digits of `nums[i]` is equal to `i`.

If no such index exists, return `-1`.

 

 **Example 1:** 

 **Input:**  nums = [1,3,2]

 **Output:**  2

 **Explanation:** 

- For nums[2] = 2, the sum of digits is 2, which is equal to index i = 2. Thus, the output is 2.

 **Example 2:** 

 **Input:**  nums = [1,10,11]

 **Output:**  1

 **Explanation:** 

- For nums[1] = 10, the sum of digits is 1 + 0 = 1, which is equal to index i = 1.
- For nums[2] = 11, the sum of digits is 1 + 1 = 2, which is equal to index i = 2.
- Since index 1 is the smallest, the output is 1.

 **Example 3:** 

 **Input:**  nums = [1,2,3]

 **Output:**  -1

 **Explanation:** 

- Since no index satisfies the condition, the output is -1.

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 0 <= nums[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 31 MB (beats 52.36%)  
**Submitted:** 2026-09-24T12:18:32.615Z  

```cpp
class Solution {
public:
    int digit(int n)
    {
        int a = 0;
        while(n)
        {
            int k = n % 10;
            a+=k;
            n/=10;
        }
        return a;
    }
    int smallestIndex(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            if(digit(nums[i]) == i) ans = min(ans,i);
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/smallest-index-with-digit-sum-equal-to-index/)