# Boats to Save People

![Difficulty](https://img.shields.io/badge/Difficulty-1529-red)

## Problem

You are given an array `people` where `people[i]` is the weight of the `ith` person, and an  **infinite number of boats**  where each boat can carry a maximum weight of `limit`. Each boat carries at most two people at the same time, provided the sum of the weight of those people is at most `limit`.

Return  *the minimum number of boats to carry every given person*.

 

 **Example 1:** 

```
Input: people = [1,2], limit = 3
Output: 1
Explanation: 1 boat (1, 2)

```

 **Example 2:** 

```
Input: people = [3,2,2,1], limit = 3
Output: 3
Explanation: 3 boats (1, 2), (2) and (3)

```

 **Example 3:** 

```
Input: people = [3,5,3,4], limit = 5
Output: 4
Explanation: 4 boats (3), (3), (4), (5)

```

 

 **Constraints:** 

- 1 <= people.length <= 5 * 104
- 1 <= people[i] <= limit <= 3 * 104

## Solution

**Language:** C++  
**Runtime:** 22 ms (beats 24.49%)  
**Memory:** 45.7 MB (beats 97.14%)  
**Submitted:** 2026-07-12T09:14:24.945Z  

```cpp
class Solution {
public:
    int numRescueBoats(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int i = 0;
        int j = nums.size() - 1;
        int sum;
        while(i <= j)
        {
            if(i == j)
            {
                ans+=1;
                break;
            }
            sum = nums[i] + nums[j];
            if(sum > k) j--;
            else
            {
                i++;
                j--;
            }
            ans+=1;
            
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/boats-to-save-people/)