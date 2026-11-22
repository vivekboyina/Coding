# 3Sum

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

 

Original
C++
 **Example 1:** 

```
Input: nums = [-1,0,1,2,-1,-4]
Output: [[-1,-1,2],[-1,0,1]]
Explanation: 
nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
The distinct triplets are [-1,0,1] and [-1,-1,2].
Notice that the order of the output and the order of the triplets does not matter.

```

 **Example 2:** 

```
Input: nums = [0,1,1]
Output: []
Explanation: The only possible triplet does not sum up to 0.

```

 **Example 3:** 

```
Input: nums = [0,0,0]
Output: [[0,0,0]]
Explanation: The only possible triplet sums up to 0.

```

 

 **Constraints:** 

- 3 <= nums.length <= 3000
- -105 <= nums[i] <= 105

## Solution

**Language:** C++  
**Runtime:** 122 ms (beats 10.25%)  
**Memory:** 34.8 MB (beats 11.11%)  
**Submitted:** 2026-11-22T14:59:00.664Z  

```cpp
/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>>st;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int j,k;
        int sum;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            j = i + 1;
            k = n - 1;
            while(i < n && j < k)
            {
                vector<int>row;
                if(j == i)
                {
                    j++;
                    continue;
                }
                else if(k == i)
                {
                    k--;
                    continue;
                }
                else if(j < n && j == k)
                {
                    j++;
                    continue;
                }
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    // cout << i << " " << j << " " << k << endl;
                    row.push_back(nums[i]);
                    row.push_back(nums[j]);
                    row.push_back(nums[k]);
                    sort(row.begin(),row.end());
                    ans.push_back(row);
                    // st.insert(row);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j - 1]) j++;
                    while(j < k && nums[k] == nums[k + 1]) k--;
                }
                else if(sum > 0) k--;
                else if(sum < 0) j++;
            }
        }
        // vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
// @lc code=end


```

---

[View on LeetCode](https://leetcode.com/problems/3sum/)