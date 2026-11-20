# 3Sum

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array nums, return all the triplets `[nums[i], nums[j], nums[k]]` such that `i != j`, `i != k`, and `j != k`, and `nums[i] + nums[j] + nums[k] == 0`.

Notice that the solution set must not contain duplicate triplets.

 

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
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-11-20T01:10:48.511Z  

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
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int j,k;
        int sum;
        for(int i = 0; i < n; i++)
        {
            vector<int>row;
            j = 0;
            k = n - 1;
            while(j < k)
            {
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
                cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    row.push_back(nums[i]);
                    row.push_back(nums[j]);
                    row.push_back(nums[k]);
                    sort(row.begin(),row.end());
                    st.insert(row);
                    break;
                }
                else if(sum > 0) k--;
                else if(sum < 0) j++;
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
// @lc code=end


```

---

[View on LeetCode](https://leetcode.com/problems/3sum/)