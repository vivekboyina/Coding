# Min Cost Climbing Stairs

![Difficulty](https://img.shields.io/badge/Difficulty-1358-red)

## Problem

You are given an integer array `cost` where `cost[i]` is the cost of `ith` step on a staircase.

Once you pay the cost, you can either climb  **one**  or  **two**  steps.

You can either start from the step with index 0, or the step with index 1.

Return the  **minimum**  cost to reach the top of the staircase, which is the position just past the last step (index `cost.length`).

 

 **Example 1:** 

```
Input: cost = [10,15,20]
Output: 15
Explanation: You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.

```

 **Example 2:** 

```
Input: cost = [1,100,1,1,1,100,1,1,100,1]
Output: 6
Explanation: You will start at index 0.
- Pay 1 and climb two steps to reach index 2.
- Pay 1 and climb two steps to reach index 4.
- Pay 1 and climb two steps to reach index 6.
- Pay 1 and climb one step to reach index 7.
- Pay 1 and climb two steps to reach index 9.
- Pay 1 and climb one step to reach the top.
The total cost is 6.

```

 

 **Constraints:** 

- 2 <= cost.length <= 1000
- 0 <= cost[i] <= 999

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 17.8 MB (beats 29.87%)  
**Submitted:** 2026-10-03T01:13:47.928Z  

```cpp
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int>dp(n);
        dp[0] = cost[0];
        dp[1] = cost[1];
        for(int i = 2; i < n; i++) dp[i] = min(dp[i - 1] + cost[i],dp[i - 2] + cost[i]);
        return min(dp[n - 1],dp[n - 2]);
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/min-cost-climbing-stairs/)