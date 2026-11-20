# Majority Element II

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array of size `n`, find all elements that appear more than `⌊n / 3⌋` times.

 

Original
C++
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
**Runtime:** 0 ms  
**Memory:** 8.1 MB  
**Submitted:** 2026-11-19T01:19:45.655Z  

```cpp
// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0;
        int c2 = 0;
        int n1 = INT_MAX,n2 = INT_MAX;
        for(int i : nums)
        {
            if(c1 == 0)
            {
                n1 = i;
                c1+=1;
            }
            else if(c2 == 0)
            {
                n2 = i;
                c2+=1;
            }
            else if(n1 == i) c1+=1;
            else if(n2 == i) c2+=1;
            else
            {
                c1-=1;
                c2-=1;
            }
        }
        int n = nums.size();
        vector<int>ans;
        if(c1 > n/3) ans.push_back(n1);
        if(c2 > n/3 && n1 != n2) ans.push_back(n2);
        return ans;
    }
};
// @lc code=end


```

---

[View on LeetCode](https://leetcode.com/problems/majority-element-ii/)