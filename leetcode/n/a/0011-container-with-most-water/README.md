# Container With Most Water

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You are given an integer array `height` of length `n`. There are `n` vertical lines drawn such that the two endpoints of the `ith` line are `(i, 0)` and `(i, height[i])`.

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return  *the maximum amount of water a container can store*.

 **Notice**  that you may not slant the container.

 

 **Example 1:** 

```
Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.

```

 **Example 2:** 

```
Input: height = [1,1]
Output: 1

```

 

 **Constraints:** 

- n == height.length
- 2 <= n <= 105
- 0 <= height[i] <= 104

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 44.49%)  
**Memory:** 62.9 MB (beats 78.80%)  
**Submitted:** 2026-07-12T05:54:56.362Z  

```cpp
class Solution {
public:
    int maxArea(vector<int>& hgts) {
        int ans = 0;
        int i = 0;
        int j = hgts.size() - 1;
        while(i < j)
        {
            ans = max(ans,(min(hgts[i],hgts[j])*(j - i)));
            if(hgts[i] < hgts[j]) i++;
            else j--;
        }
        return ans;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/container-with-most-water/)