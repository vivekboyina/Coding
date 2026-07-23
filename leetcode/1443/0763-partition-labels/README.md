# Partition Labels

![Difficulty](https://img.shields.io/badge/Difficulty-1443-red)

## Problem

You are given a string `s`. We want to partition the string into as many parts as possible so that each letter appears in at most one part. For example, the string `"ababcc"` can be partitioned into `["abab", "cc"]`, but partitions such as `["aba", "bcc"]` or `["ab", "ab", "cc"]` are invalid.

Note that the partition is done so that after concatenating all the parts in order, the resultant string should be `s`.

Return  *a list of integers representing the size of these parts*.

 

 **Example 1:** 

```
Input: s = "ababcbacadefegdehijhklij"
Output: [9,7,8]
Explanation:
The partition is "ababcbaca", "defegde", "hijhklij".
This is a partition so that each letter appears in at most one part.
A partition like "ababcbacadefegde", "hijhklij" is incorrect, because it splits s into less parts.

```

 **Example 2:** 

```
Input: s = "eccbbbbdec"
Output: [10]

```

 

 **Constraints:** 

- 1 <= s.length <= 500
- s consists of lowercase English letters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9 MB (beats 40.12%)  
**Submitted:** 2026-07-23T06:31:20.192Z  

```cpp
class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        unordered_map<char,int>mp;
        int n = s.length();
        for(int i = 0; i < n; i++) mp[s[i]] = i;
        int mx = -1;
        for(int i = 0; i < n; i++)
        {
            mx = max(mp[s[i]],mx);
            if(i == mx) ans.push_back(mx + 1);
        }
        for(int i = ans.size() - 1; i > 0; i--) ans[i] = ans[i] - ans[i - 1];
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/partition-labels/)