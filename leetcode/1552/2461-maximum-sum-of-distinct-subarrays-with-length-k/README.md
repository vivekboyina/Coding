# Maximum Sum of Distinct Subarrays With Length K

![Difficulty](https://img.shields.io/badge/Difficulty-1552-red)

## Problem

You are given an integer array `nums` and an integer `k`. Find the maximum subarray sum of all the subarrays of `nums` that meet the following conditions:

- The length of the subarray is k, and
- All the elements of the subarray are distinct.

Return  *the maximum subarray sum of all the subarrays that meet the conditions**.*  If no subarray meets the conditions, return `0`.

 *A  **subarray**  is a contiguous non-empty sequence of elements within an array.* 

 

 **Example 1:** 

```
Input: nums = [1,5,4,2,9,9,9], k = 3
Output: 15
Explanation: The subarrays of nums with length 3 are:
- [1,5,4] which meets the requirements and has a sum of 10.
- [5,4,2] which meets the requirements and has a sum of 11.
- [4,2,9] which meets the requirements and has a sum of 15.
- [2,9,9] which does not meet the requirements because the element 9 is repeated.
- [9,9,9] which does not meet the requirements because the element 9 is repeated.
We return 15 because it is the maximum subarray sum of all the subarrays that meet the conditions

```

 **Example 2:** 

```
Input: nums = [4,4,4], k = 3
Output: 0
Explanation: The subarrays of nums with length 3 are:
- [4,4,4] which does not meet the requirements because the element 4 is repeated.
We return 0 because no subarrays meet the conditions.

```

 

 **Constraints:** 

- 1 <= k <= nums.length <= 105
- 1 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-08-07T05:13:18.706Z  

```cpp
class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<long long,long long>mp;
        long long csum = 0;
        long long n = nums.size();
        for(int i = 0; i < k; i++)
        {
            csum+=nums[i];
            mp[nums[i]]++;
        }
        long long ans = 0;
        if(mp.size() == k) ans = max(ans,csum);
        for(long long i = k; i < n; i++)
        {
            mp[nums[i - k]]--;
            mp[nums[i]]++;
            csum-=nums[i - k];
            csum+=nums[i];
            if(mp[nums[i - k]] == 0) mp.erase(nums[i - k]);
            if(mp.size() == k) ans = max(ans,csum);
        }
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/maximum-sum-of-distinct-subarrays-with-length-k/)