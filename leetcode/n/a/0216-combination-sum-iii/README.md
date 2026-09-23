# Combination Sum III

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Find all valid combinations of `k` numbers that sum up to `n` such that the following conditions are true:

- Only numbers 1 through 9 are used.
- Each number is used at most once.

Return  *a list of all possible valid combinations*. The list must not contain the same combination twice, and the combinations may be returned in any order.

 

 **Example 1:** 

```
Input: k = 3, n = 7
Output: [[1,2,4]]
Explanation:
1 + 2 + 4 = 7
There are no other valid combinations.
```

 **Example 2:** 

```
Input: k = 3, n = 9
Output: [[1,2,6],[1,3,5],[2,3,4]]
Explanation:
1 + 2 + 6 = 9
1 + 3 + 5 = 9
2 + 3 + 4 = 9
There are no other valid combinations.

```

 **Example 3:** 

```
Input: k = 4, n = 1
Output: []
Explanation: There are no valid combinations.
Using 4 different numbers in the range [1,9], the smallest sum we can get is 1+2+3+4 = 10 and since 10 > 1, there are no valid combination.

```

 

 **Constraints:** 

- 2 <= k <= 9
- 1 <= n <= 60

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 8.9 MB (beats 40.03%)  
**Submitted:** 2026-09-23T14:11:57.438Z  

```cpp
class Solution {
public:
    void rec(vector<int>&ds,vector<vector<int>>&ans,int &sum,int i,int &n,int &k)
    {
        if(i > 10) return;
        if(ds.size() == k)
        {
            if(sum == n) ans.push_back(ds);
            return;
        }
        if(sum > n) return;
        sum+=i;
        ds.push_back(i);
        rec(ds,ans,sum,i + 1,n,k);
        ds.pop_back();
        sum-=i;
        rec(ds,ans,sum,i + 1,n,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int sum = 0;
        vector<vector<int>>ans;
        vector<int>ds;
        rec(ds,ans,sum,1,n,k);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/combination-sum-iii/)