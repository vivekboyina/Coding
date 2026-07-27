# Search in Rotated Sorted Array II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

There is an integer array `nums` sorted in non-decreasing order (not necessarily with  **distinct**  values).

Before being passed to your function, `nums` is  **rotated**  at an unknown pivot index `k` (`0 <= k < nums.length`) such that the resulting array is `[nums[k], nums[k+1],..., nums[n-1], nums[0], nums[1],..., nums[k-1]]` (**0-indexed**). For example, `[0,1,2,4,4,4,5,6,6,7]` might be rotated at pivot index `5` and become `[4,5,6,6,7,0,1,2,4,4]`.

Given the array `nums`  **after**  the rotation and an integer `target`, return `true` *if* `target` *is in* `nums` *, or* `false` *if it is not in* `nums` *.* 

You must decrease the overall operation steps as much as possible.

 

 **Example 1:** 

```
Input: nums = [2,5,6,0,0,1,2], target = 0
Output: true

```

 **Example 2:** 

```
Input: nums = [2,5,6,0,0,1,2], target = 3
Output: false

```

 

 **Constraints:** 

- 1 <= nums.length <= 5000
- -104 <= nums[i] <= 104
- nums is guaranteed to be rotated at some pivot.
- -104 <= target <= 104

 

 **Follow up:**  This problem is similar to Search in Rotated Sorted Array, but `nums` may contain  **duplicates**. Would this affect the runtime complexity? How and why?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 18 MB (beats 81.38%)  
**Submitted:** 2026-07-27T13:15:14.832Z  

```cpp
class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(nums[mid] == target) return true;
            else if(nums[mid] == nums[low] && nums[high] == nums[mid])
            {
                low+=1;
                high-=1;
            }
            else if(nums[low] <= target && nums[low] > nums[mid]) high = mid - 1;
            else if(nums[high] >= target && nums[high] < nums[mid]) low = mid + 1;
            else if(nums[mid] > target) high = mid - 1;
            else if(nums[mid] < target) low = mid + 1;
        }
        return false;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/search-in-rotated-sorted-array-ii/)