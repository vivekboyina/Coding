# Count Number of Maximum Bitwise-OR Subsets

![Difficulty](https://img.shields.io/badge/Difficulty-1567-red)

## Problem

Given an integer array `nums`, find the  **maximum**  possible  **bitwise OR**  of a subset of `nums` and return  *the  **number of different non-empty subsets**  with the maximum bitwise OR*.

An array `a` is a  **subset**  of an array `b` if `a` can be obtained from `b` by deleting some (possibly zero) elements of `b`. Two subsets are considered  **different**  if the indices of the elements chosen are different.

The bitwise OR of an array `a` is equal to `a[0] OR a[1] OR... OR a[a.length - 1]` (**0-indexed**).

 

 **Example 1:** 

```
Input: nums = [3,1]
Output: 2
Explanation: The maximum possible bitwise OR of a subset is 3. There are 2 subsets with a bitwise OR of 3:
- [3]
- [3,1]

```

 **Example 2:** 

```
Input: nums = [2,2,2]
Output: 7
Explanation: All non-empty subsets of [2,2,2] have a bitwise OR of 2. There are 23 - 1 = 7 total subsets.

```

 **Example 3:** 

```
Input: nums = [3,2,1,5]
Output: 6
Explanation: The maximum possible bitwise OR of a subset is 7. There are 6 subsets with a bitwise OR of 7:
- [3,5]
- [3,1,5]
- [3,2,5]
- [3,2,1,5]
- [2,5]
- [2,1,5]
```

 

 **Constraints:** 

- 1 <= nums.length <= 16
- 1 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 102 ms (beats 15.12%)  
**Memory:** 11.4 MB (beats 22.00%)  
**Submitted:** 2026-08-03T13:11:34.001Z  

```cpp
class Solution {
public:
    int countMaxOrSubsets(vector<int>& nums) {
        unordered_map<int,int>mp;
        int n = nums.size();
        int bor;
        for(int i = 0; i < (1 << n); i++)
        {
            bor = 0;
            for(int j = 0; j < n; j++)
            {
                if(i & (1 << j)) bor|=nums[j];
            }
            mp[bor]++;
        }
        int ans = 0;
        int maxy = INT_MIN;
        for(auto it : mp)
        {
            if(it.first > maxy)
            {
                maxy = it.first;
                ans = it.second;
            }
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/count-number-of-maximum-bitwise-or-subsets/)