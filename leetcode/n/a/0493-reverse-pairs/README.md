# Reverse Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array `nums`, return  *the number of  **reverse pairs**  in the array*.

A  **reverse pair**  is a pair `(i, j)` where:

- 0 <= i < j < nums.length and
- nums[i] > 2 * nums[j].

 

Original
C++
 **Example 1:** 

```
Input: nums = [1,3,2,3,1]
Output: 2
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 3, nums[4] = 1, 3 > 2 * 1

```

 **Example 2:** 

```
Input: nums = [2,4,3,5,1]
Output: 3
Explanation: The reverse pairs are:
(1, 4) --> nums[1] = 4, nums[4] = 1, 4 > 2 * 1
(2, 4) --> nums[2] = 3, nums[4] = 1, 3 > 2 * 1
(3, 4) --> nums[3] = 5, nums[4] = 1, 5 > 2 * 1

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- -231 <= nums[i] <= 231 - 1

## Solution

**Language:** C++  
**Runtime:** 365 ms (beats 75.99%)  
**Memory:** 146.9 MB (beats 77.03%)  
**Submitted:** 2026-11-22T08:06:21.084Z  

```cpp
/*
 * @lc app=leetcode id=493 lang=cpp
 *
 * [493] Reverse Pairs
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    void merge(vector<int>& nums,int low,int mid,int high)
    {
        int n1 = mid - low + 1;
        int n2 = high - mid;
        vector<int>a(n1),b(n2);
        for(int i = 0; i < n1; i++) a[i] = nums[low + i];
        for(int i = 0; i < n2; i++) b[i] = nums[mid + 1 + i];
        int r = mid + 1;
        for(int i = low; i <= mid; i++)
        {
            while(r <= high && nums[i] > 1LL*2*nums[r]) r++;
            ans = ans + (r - (mid + 1));
        }
        int i = 0,j = 0,k = low;
        while(i < n1 && j < n2)
        {
            if(a[i] < b[j]) nums[k++] = a[i++];
            else nums[k++] = b[j++];
        }
        while(i < n1) nums[k++] = a[i++];
        while(j < n2) nums[k++] = b[j++];
    }
    void mergesort(vector<int>& nums,int low,int high)
    {
        if(low < high)
        {
            int mid = (low + high)/2;
            mergesort(nums,low,mid);
            mergesort(nums,mid + 1,high);
            merge(nums,low,mid,high);
        }
    }
    int reversePairs(vector<int>& nums) {
        mergesort(nums,0,nums.size() - 1);
        return ans;
    }
};
// @lc code=end
```

---

[View on LeetCode](https://leetcode.com/problems/reverse-pairs/)