# House Robber II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are  **arranged in a circle.**  That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and  **it will automatically contact the police if two adjacent houses were broken into on the same night**.

Given an integer array `nums` representing the amount of money of each house, return  *the maximum amount of money you can rob tonight  **without alerting the police***.

 

 **Example 1:** 

```
Input: nums = [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.

```

 **Example 2:** 

```
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.

```

 **Example 3:** 

```
Input: nums = [1,2,3]
Output: 3

```

 

 **Constraints:** 

- 1 <= nums.length <= 100
- 0 <= nums[i] <= 1000

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 10.9 MB (beats 36.91%)  
**Submitted:** 2026-10-02T07:44:58.693Z  

```cpp
class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>dp(n);
        dp[0] = nums[0];
        for(int i = 1; i < n - 1; i++)
        {
            if(i == 1) dp[1] = max(nums[1],dp[0]);
            else dp[i] = max(dp[i - 1],nums[i] + dp[i - 2]);
        }
        int ans = dp[n - 2];
        dp[n - 1] = nums[n - 1];
        for(int i = n - 2; i > 0; i--)
        {
            if(i == n - 2) dp[n - 2] = max(nums[n - 2],dp[n - 1]);
            else dp[i] = max(dp[i + 1],nums[i] + dp[i + 2]);
        }
        return max(ans,dp[1]);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/house-robber-ii/)