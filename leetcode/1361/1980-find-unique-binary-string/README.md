# Find Unique Binary String

![Difficulty](https://img.shields.io/badge/Difficulty-1361-red)

## Problem

Given an array of strings `nums` containing `n`  **unique**  binary strings each of length `n`, return  *a binary string of length* `n` *that  **does not appear**  in* `nums` *. If there are multiple answers, you may return  **any**  of them*.

 

 **Example 1:** 

```
Input: nums = ["01","10"]
Output: "11"
Explanation: "11" does not appear in nums. "00" would also be correct.

```

 **Example 2:** 

```
Input: nums = ["00","01"]
Output: "11"
Explanation: "11" does not appear in nums. "10" would also be correct.

```

 **Example 3:** 

```
Input: nums = ["111","011","001"]
Output: "101"
Explanation: "101" does not appear in nums. "000", "010", "100", and "110" would also be correct.

```

 

 **Constraints:** 

- n == nums.length
- 1 <= n <= 16
- nums[i].length == n
- nums[i] is either '0' or '1'.
- All the strings of nums are unique.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 12.6 MB (beats 43.30%)  
**Submitted:** 2026-08-25T05:36:15.382Z  

```cpp
class Solution {
public:
    string ans = "";
    unordered_map<string,bool>mp;
    void bkt(string& s,int n)
    {
        if(ans.length() == n) return;
        if(s.length() == n)
        {
            if(mp.find(s) == mp.end()) ans = s;
            return;
        }
        s.push_back('0');
        bkt(s,n);
        s.pop_back();
        s.push_back('1');
        bkt(s,n);
        s.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].length();
        for(string s : nums) mp[s] = true;
        string s = "";
        bkt(s,n);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/find-unique-binary-string/)