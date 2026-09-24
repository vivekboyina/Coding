# Majority Element II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array of size `n`, find all elements that appear more than `⌊n / 3⌋` times.

 

 **Example 1:** 

```
Input: nums = [3,2,3]
Output: [3]

```

 **Example 2:** 

```
Input: nums = [1]
Output: [1]

```

 **Example 3:** 

```
Input: nums = [1,2]
Output: [1,2]

```

 

 **Constraints:** 

- 1 <= nums.length <= 5 * 104
- -109 <= nums[i] <= 109

 

 **Follow up:**  Could you solve the problem in linear time and in `O(1)` space?

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 23.8 MB (beats 76.25%)  
**Submitted:** 2026-09-24T12:30:49.413Z  

```cpp
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = INT_MAX;
        int num2 = INT_MAX;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i : nums)
        {
            if(i == num1) cnt1++;
            else if(i == num2) cnt2++;
            else if(cnt1 == 0)
            {
                num1 = i;
                cnt1++;
            }
            else if(cnt2 == 0)
            {
                num2 = i;
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i : nums)
        {
            if(i == num1) cnt1++;
            else if(i == num2) cnt2++;
        }
        int n = nums.size();
        vector<int>tuf;
        if(cnt1 > n/3) tuf.push_back(num1);
        if(cnt2 > n/3) tuf.push_back(num2);
        return tuf;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/majority-element-ii/)