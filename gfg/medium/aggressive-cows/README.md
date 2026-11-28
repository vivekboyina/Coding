# Aggressive Cows

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an integer array  **arr[]**, which denotes the positions of stalls. All the positions are distinct. There are **k**  aggressive cows.

Assign the cows to the stalls such that the **minimum**  distance between any two cows is  **maximized.** 

 **Examples:** 

```
Input: arr[] = [1, 2, 4, 8, 9], k = 3
Output: 3
Explanation: The first cow can be placed at arr[0], the second at arr[2], and the third at arr[3]. The minimum distance between any two cows is 3 (between arr[0] and arr[2]), which is the maximum possible among all valid arrangements.
```

```
Input: arr[] = [10, 1, 2, 7, 5], k = 3
Output: 4
Explanation: The first cow can be placed at arr[0], the second at arr[1], and the third at arr[4]. In this arrangement, the minimum distance between any two cows is 4 (between arr[1] and arr[4]), which is the maximum possible among all valid arrangements.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-28T01:51:10.878Z  

```cpp
class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int l = 0;
        int h = arr[arr.size() - 1] - arr[0];
        int m,cnt,pr;
        int n = arr.size();
        int ans = INT_MIN;
        while(l <= h)
        {
            m = l + (h - l)/2;
            cnt = 0;
            pr = arr[0];
            
            for(int i = 1; i < n; i++)
            {
                if(arr[i] - pr >= m)
                {
                    pr = arr[i];
                    cnt++;
                }
            }
            if(cnt >= k - 1)
            {
                ans = max(ans,m);
                l = m + 1;
            }
            else  h = m - 1;
        }
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/aggressive-cows/1)