# Minimum Division Operations to Make Array Non Decreasing

![Difficulty](https://img.shields.io/badge/Difficulty-1864-red)

## Problem

You are given an integer array `nums`.

Any  **positive**  divisor of a natural number `x` that is  **strictly less**  than `x` is called a  **proper divisor**  of `x`. For example, 2 is a  *proper divisor*  of 4, while 6 is not a  *proper divisor*  of 6.

You are allowed to perform an  **operation**  any number of times on `nums`, where in each  **operation**  you select any  *one*  element from `nums` and divide it by its  **greatest**   **proper divisor**.

Return the  **minimum**  number of  **operations**  required to make the array  **non-decreasing**.

If it is  **not**  possible to make the array  *non-decreasing*  using any number of operations, return `-1`.

 

 **Example 1:** 

 **Input:**  nums = [25,7]

 **Output:**  1

 **Explanation:** 

Using a single operation, 25 gets divided by 5 and `nums` becomes `[5, 7]`.

 **Example 2:** 

 **Input:**  nums = [7,7,6]

 **Output:**  -1

 **Example 3:** 

 **Input:**  nums = [1,1,1,1]

 **Output:**  0

 

 **Constraints:** 

- 1 <= nums.length <= 105
- 1 <= nums[i] <= 106

## Solution

**Language:** C++  
**Runtime:** 4 ms  
**Memory:** 12.7 MB  
**Submitted:** 2026-08-25T09:31:53.628Z  

```cpp
// #define i long long
vector<int>spf(1000001,-1);
class Solution {
public: 
    void prime()
    {
        spf[0] = 0;
        spf[1] = 1;
        for(int i = 2; i * i <= 1000000; i++)
        {
            if(spf[i] == -1)
            {
                for(int j = i; j <= 1000000; j+=i) if(spf[j] == -1) spf[j] = i;
            }
        }
        for(int i = 2; i <= 1000000; i++) if(spf[i] == -1) spf[i] = i;
    }
    int minOperations(vector<int>& nums) {
        static int flag = 0 ;
        if(flag == 0)
        {
            prime();
            flag = 1 ;
        }
        int ans = 0;
        int n = nums.size();
        for(int i = n - 2; i >= 0; i--)
        {
            if(nums[i] > nums[i + 1])
            {
                if(spf[nums[i]] == nums[i]) continue;
                while(nums[i] > nums[i + 1])
                {
                    if(spf[nums[i]] == nums[i]) break;
                    nums[i] = spf[nums[i]];
                    ans+=1;
                }
            }
        }
        for(int i = 0; i < n - 1; i++) if(nums[i] > nums[i + 1]) return -1;
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/minimum-division-operations-to-make-array-non-decreasing/)