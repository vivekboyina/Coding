# Sliding Window Maximum

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given an array of integers `nums`, there is a sliding window of size `k` which is moving from the very left of the array to the very right. You can only see the `k` numbers in the window. Each time the sliding window moves right by one position.

Return  *the max sliding window*.

 

 **Example 1:** 

```
Input: nums = [1,3,-1,-3,5,3,6,7], k = 3
Output: [3,3,5,5,6,7]
Explanation: 
Window position                Max
---------------               -----
[1  3  -1] -3  5  3  6  7       3
 1 [3  -1  -3] 5  3  6  7       3
 1  3 [-1  -3  5] 3  6  7       5
 1  3  -1 [-3  5  3] 6  7       5
 1  3  -1  -3 [5  3  6] 7       6
 1  3  -1  -3  5 [3  6  7]      7

```

 **Example 2:** 

```
Input: nums = [1], k = 1
Output: [1]

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -104 <= nums[i] <= 104
- 1 <= k <= nums.length

## Solution

**Language:** C++  
**Runtime:** 132 ms (beats 9.39%)  
**Memory:** 159.7 MB (beats 7.74%)  
**Submitted:** 2026-07-30T15:50:23.878Z  

```cpp
class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        priority_queue<int>pq;
        for(int i = 0; i < k; i++)
        {
            pq.push(nums[i]);
            mp[nums[i]]++;
        }
        vector<int>ans;
        ans.push_back(pq.top());
        for(int i = k; i < n; i++)
        {
            mp[nums[i - k]]--;
            mp[nums[i]]++;
            pq.push(nums[i]);
            while(mp[pq.top()] == 0) pq.pop();
            ans.push_back(pq.top());
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sliding-window-maximum/)