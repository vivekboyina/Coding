# Largest Combination With Bitwise AND Greater Than Zero

![Difficulty](https://img.shields.io/badge/Difficulty-1642-red)

## Problem

The  **bitwise AND**  of an array `nums` is the bitwise AND of all integers in `nums`.

- For example, for nums = [1, 5, 3], the bitwise AND is equal to 1 & 5 & 3 = 1.
- Also, for nums = [7], the bitwise AND is 7.

You are given an array of positive integers `candidates`. Compute the  **bitwise AND**  for all possible  **combinations**  of elements in the `candidates` array.

Return  *the size of the  **largest**  combination of* `candidates` *with a bitwise AND  **greater**  than* `0`.

 

 **Example 1:** 

```
Input: candidates = [16,17,71,62,12,24,14]
Output: 4
Explanation: The combination [16,17,62,24] has a bitwise AND of 16 & 17 & 62 & 24 = 16 > 0.
The size of the combination is 4.
It can be shown that no combination with a size greater than 4 has a bitwise AND greater than 0.
Note that more than one combination may have the largest size.
For example, the combination [62,12,24,14] has a bitwise AND of 62 & 12 & 24 & 14 = 8 > 0.

```

 **Example 2:** 

```
Input: candidates = [8,8]
Output: 2
Explanation: The largest combination [8,8] has a bitwise AND of 8 & 8 = 8 > 0.
The size of the combination is 2, so we return 2.

```

 

 **Constraints:** 

- 1 <= candidates.length <= 105
- 1 <= candidates[i] <= 107

## Solution

**Language:** C++  
**Runtime:** 195 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-08-04T04:58:20.350Z  

```cpp
class Solution {
public:
    int largestCombination(vector<int>& cnds) {
        int ans = 0;
        int n = cnds.size();
        int ban;
        int cnt;
        for(int i = 0; i < (1 << 24); i++)
        {
            ban = -1;
            cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(i & (1 << j))
                {
                    cnt++;
                    if(ban == -1) ban = cnds[j];
                    else ban&=cnds[j];
                }
            }
            if(ban > 0) ans = max(ans,cnt);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/largest-combination-with-bitwise-and-greater-than-zero/)