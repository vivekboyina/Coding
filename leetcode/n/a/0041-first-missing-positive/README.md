# First Missing Positive

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an unsorted integer array `nums`. Return the  *smallest positive integer*  that is  *not present*  in `nums`.

You must implement an algorithm that runs in `O(n)` time and uses `O(1)` auxiliary space.

 

 **Example 1:** 

```
Input: nums = [1,2,0]
Output: 3
Explanation: The numbers in the range [1,2] are all in the array.

```

 **Example 2:** 

```
Input: nums = [3,4,-1,1]
Output: 2
Explanation: 1 is in the array but 2 is missing.

```

 **Example 3:** 

```
Input: nums = [7,8,9,11,12]
Output: 1
Explanation: The smallest positive integer 1 is missing.

```

 

 **Constraints:** 

- 1 <= nums.length <= 105
- -231 <= nums[i] <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 57 ms (beats 17.37%)  
**Memory:** 78.4 MB (beats 13.69%)  
**Submitted:** 2026-07-09T14:45:10.742Z  

```cpp
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(int i : nums) if(i > 0) mp[i] = true;
        int ans = 1;
        while(mp.count(ans)) ans+=1;
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/first-missing-positive/)