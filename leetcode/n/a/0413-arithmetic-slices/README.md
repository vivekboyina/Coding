# Arithmetic Slices

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

An integer array is called arithmetic if it consists of  **at least three elements**  and if the difference between any two consecutive elements is the same.

- For example, [1,3,5,7,9], [7,7,7,7], and [3,-1,-5,-9] are arithmetic sequences.

Given an integer array `nums`, return  *the number of arithmetic  **subarrays**  of*  `nums`.

A  **subarray**  is a contiguous subsequence of the array.

 

 **Example 1:** 

```
Input: nums = [1,2,3,4]
Output: 3
Explanation: We have 3 arithmetic slices in nums: [1, 2, 3], [2, 3, 4] and [1,2,3,4] itself.

```

 **Example 2:** 

```
Input: nums = [1]
Output: 0

```

 

 **Constraints:** 

- 1 <= nums.length <= 5000
- -1000 <= nums[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-08-06T06:08:23.456Z  

```cpp
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        vector<int>diff(n,0);
        for(int i = 1; i < n; i++) diff[i] = nums[i] - nums[i - 1];
        int ans = 0;
        int cnt = 1;
        int k;
        for(int i = 1; i < n; i++)
        {
            while(i < n && diff[i - 1] == diff[i])
            {
                cnt++;
                i++;
            }
            cout << cnt << endl;
            k = cnt - 1;
            k = (k * (k + 1))/2;
            ans+=k;
            cnt = 1;
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/arithmetic-slices/)