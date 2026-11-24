# Longest Consecutive Sequence

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an unsorted array of integers `nums`, return  *the length of the longest consecutive elements sequence.* 

You must write an algorithm that runs in `O(n)` time.

 

Original
C++
 **Example 1:** 

```
Input: nums = [100,4,200,1,3,2]
Output: 4
Explanation: The longest consecutive elements sequence is [1, 2, 3, 4]. Therefore its length is 4.

```

 **Example 2:** 

```
Input: nums = [0,3,7,2,5,8,4,6,0,1]
Output: 9

```

 **Example 3:** 

```
Input: nums = [1,0,1,2]
Output: 3

```

 

 **Constraints:** 

- 0 <= nums.length <= 105
- -109 <= nums[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 85 ms (beats 63.61%)  
**Memory:** 88.9 MB (beats 46.09%)  
**Submitted:** 2026-11-24T01:51:19.492Z  

```cpp
/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int>st;
        for(int i : nums) st.insert(i);
        int ans = 0;
        int cnt = 1;
        int cur;
        for(int i : st)
        {
            if(st.find(i - 1) == st.end())
            {
                cnt = 1;
                cur = i;
                while(st.find(cur + 1) != st.end())
                {
                    cnt++;
                    cur++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
// @lc code=end


```

---

[View on LeetCode](https://leetcode.com/problems/longest-consecutive-sequence/)