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
**Memory:** 23.6 MB (beats 83.99%)  
**Submitted:** 2026-07-09T12:38:10.632Z  

```cpp
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int num1,num2;
        int n = nums.size();
        for(int i : nums)
        {
            if(cnt1 == 0 && i != num2)
            {
                cnt1 = 1;
                num1 = i;
            }
            else if(cnt2 == 0 && i != num1)
            {
                cnt2 = 1;
                num2 = i;
            }
            else if(i == num1) cnt1+=1;
            else if(i == num2) cnt2+=1;
            else
            {
                cnt1-=1;
                cnt2-=1;
            }
        }
        cnt1 = cnt2 = 0;
        for(int i : nums)
        {
            if(i == num1) cnt1+=1;
            else if(i == num2) cnt2+=1;
        }
        vector<int>ans;
        if(cnt1 > n/3) ans.push_back(num1);
        if(cnt2 > n/3) ans.push_back(num2);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/majority-element-ii/)