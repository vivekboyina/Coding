# Max Sum Subarray of Non-Negative

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers  **arr[]**, find the contiguous subarray with the maximum sum that contains only non-negative numbers.

- If multiple subarrays have the same maximum sum return the one with longest length.
- If there is still a tie, return the subarray with the smallest starting index.
- If the array contains only negative numbers, return -1.

 **Examples:** 

```
Input: arr[] = [1, 2, 3, -1, 6]
Output: [1, 2, 3]
Explanation: The valid non-negative subarrays [1, 2, 3] and [6] both have a sum of 6. Since [1, 2, 3] has the longer length, it is selected.

```

```
Input: arr[] = [-1, 2]
Output: [2]
Explanation: The only valid non-negative subarray is [2], so the output is [2].

```

```
Input: arr[] = [1, 2, 5, -7, 2, 6]
Output: [1, 2, 5]
Explanation: The valid non-negative subarrays are [1, 2, 5] and [2, 6]. Both have the same sum of 8, but [1, 2, 5] starts earlier and also longest one so it is the preferred subarray.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-14T10:58:03.729Z  

```cpp
class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        int ans = 0;
        int sum = 0;
        int l = -1;
        int r = -1;
        int j = 0;
        int i = 0;
        int n = arr.size();
        while(i < n)
        {
            sum = 0;
            if(arr[i] < 0)
            {
                i++;
                continue;
            }
            j = i;
            while(j < n && arr[j] >= 0)
            {
                sum+=arr[j];
                j++;
            }
            if(sum > ans)
            {
                l = i;
                r = j;
                ans = sum;
            }
            else if(sum == ans && (j - i) > (r - l))
            {
                l = i;
                r = j;
                ans = sum;
            }
            i = j;
        }
        vector<int>nums;
        if(l != -1 && r != -1) for(int k = l; k < r; k++) nums.push_back(arr[k]);
        else nums.push_back(-1);
        return nums;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/maximum-sub-array5443/1)