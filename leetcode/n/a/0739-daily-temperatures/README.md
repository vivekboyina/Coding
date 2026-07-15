# Daily Temperatures

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

Given an array of integers `temperatures` represents the daily temperatures, return  *an array*  `answer`  *such that*  `answer[i]`  *is the number of days you have to wait after the*  `ith`  *day to get a warmer temperature*. If there is no future day for which this is possible, keep `answer[i] == 0` instead.

 

 **Example 1:** 

```
Input: temperatures = [73,74,75,71,69,72,76,73]
Output: [1,1,4,2,1,1,0,0]

```

 **Example 2:** 

```
Input: temperatures = [30,40,50,60]
Output: [1,1,1,0]

```

 **Example 3:** 

```
Input: temperatures = [30,60,90]
Output: [1,1,0]

```

 

 **Constraints:** 

- 1 <= temperatures.length <= 105
- 30 <= temperatures[i] <= 100

## Solution

**Language:** C++  
**Runtime:** 22 ms (beats 55.02%)  
**Memory:** 102.7 MB (beats 99.07%)  
**Submitted:** 2026-07-15T04:51:00.763Z  

```cpp
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmp) {
        int n = tmp.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i = n - 1; i >= 0; i--)
        {
            if(!st.empty())
            {
                while(!st.empty() && tmp[st.top()] <= tmp[i]) st.pop();
                if(!st.empty() && tmp[st.top()] > tmp[i]) ans[i] = st.top() - i;
            }
            st.push(i);
        }
        return ans;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/daily-temperatures/)