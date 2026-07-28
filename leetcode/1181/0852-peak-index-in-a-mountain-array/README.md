# Peak Index in a Mountain Array

![Difficulty](https://img.shields.io/badge/Difficulty-1181-red)

## Problem

You are given an integer  **mountain**  array `arr` of length `n` where the values increase to a  **peak element**  and then decrease.

Return the index of the peak element.

Your task is to solve it in `O(log(n))` time complexity.

 

 **Example 1:** 

 **Input:**  arr = [0,1,0]

 **Output:**  1

 **Example 2:** 

 **Input:**  arr = [0,2,1,0]

 **Output:**  1

 **Example 3:** 

 **Input:**  arr = [0,10,5,2]

 **Output:**  1

 

 **Constraints:** 

- 3 <= arr.length <= 105
- 0 <= arr[i] <= 106
- arr is guaranteed to be a mountain array.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 63.5 MB (beats 79.63%)  
**Submitted:** 2026-07-28T13:12:11.333Z  

```cpp
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(arr[high] < arr[mid]) high-=1;
            else low = mid + 1;
        }
        return high;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/peak-index-in-a-mountain-array/)