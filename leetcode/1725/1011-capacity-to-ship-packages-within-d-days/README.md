# Capacity To Ship Packages Within D Days

![Difficulty](https://img.shields.io/badge/Difficulty-1725-red)

## Problem

A conveyor belt has packages that must be shipped from one port to another within `days` days.

The `ith` package on the conveyor belt has a weight of `weights[i]`. Each day, we load the ship with packages on the conveyor belt (in the order given by `weights`). We may not load more weight than the maximum weight capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt being shipped within `days` days.

 

 **Example 1:** 

```
Input: weights = [1,2,3,4,5,6,7,8,9,10], days = 5
Output: 15
Explanation: A ship capacity of 15 is the minimum to ship all the packages in 5 days like this:
1st day: 1, 2, 3, 4, 5
2nd day: 6, 7
3rd day: 8
4th day: 9
5th day: 10

Note that the cargo must be shipped in the order given, so using a ship of capacity 14 and splitting the packages into parts like (2, 3, 4, 5), (1, 6, 7), (8), (9), (10) is not allowed.

```

 **Example 2:** 

```
Input: weights = [3,2,2,4,1,4], days = 3
Output: 6
Explanation: A ship capacity of 6 is the minimum to ship all the packages in 3 days like this:
1st day: 3, 2
2nd day: 2, 4
3rd day: 1, 4

```

 **Example 3:** 

```
Input: weights = [1,2,3,1,1], days = 4
Output: 3
Explanation:
1st day: 1
2nd day: 2
3rd day: 3
4th day: 1, 1

```

 

 **Constraints:** 

- 1 <= days <= weights.length <= 5 * 104
- 1 <= weights[i] <= 500

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.1 MB  
**Submitted:** 2026-07-26T15:45:59.991Z  

```cpp
class Solution {
public:
    int shipWithinDays(vector<int>& wei, int days) {
        int low = INT_MIN;
        int high = 0;
        for(int i : wei)
        {
            low = max(i,low);
            high+=i;
        }
        int cnt = 0;
        int w = 0;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            cnt = 0;
            w = 0;
            for(int i : wei)
            {
                w+=i;
                if(w > mid)
                {
                    w = i;
                    cnt++;
                }
            }
            if(w > 0) cnt++;
            if(cnt > days) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/capacity-to-ship-packages-within-d-days/)