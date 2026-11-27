# Koko Eating Bananas

![Difficulty](https://img.shields.io/badge/Difficulty-1765-red)

## Problem

Koko loves to eat bananas. There are `n` piles of bananas, the `ith` pile has `piles[i]` bananas. The guards have gone and will come back in `h` hours.

Koko can decide her bananas-per-hour eating speed of `k`. Each hour, she chooses some pile of bananas and eats `k` bananas from that pile. If the pile has less than `k` bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the  **minimum**  integer `k` such that she can eat all the bananas  **within**  `h` hours.

 

Original
C++
 **Example 1:** 

 **Input:**  piles = [3,6,7,11], h = 8

 **Output:**  4

 **Explanation:** 

At a speed of 4 bananas per hour, Koko takes 1, 2, 2, and 3 hours to finish the respective piles, totaling 8 hours.

 **Example 2:** 

 **Input:**  piles = [30,11,23,4,20], h = 5

 **Output:**  30

 **Explanation:** 

Koko must finish each pile in exactly 1 hour, so her minimum eating speed must be 30 bananas per hour.

 **Example 3:** 

 **Input:**  piles = [30,11,23,4,20], h = 6

 **Output:**  23

 **Explanation:** 

At a speed of 23 bananas per hour, Koko takes 2 hours for the first pile and 1 hour for each remaining pile, totaling 6 hours.

 

 **Constraints:** 

- 1 <= piles.length <= 104
- piles.length <= h <= 109
- 1 <= piles[i] <= 109

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 8.2 MB  
**Submitted:** 2026-11-27T10:14:14.859Z  

```cpp
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int hr) {
        int l = 1;
        int h = INT_MIN;
        for(int i : piles) h = max(i,h);
        int m;
        while(l < h)
        {
            m = l + (h - l)/2;
            int cnt = 0;
            for(int i : piles) cnt += (i % m == 0) ? i/m : (i + m)/m;
            if(cnt > hr) l = m + 1;
            else h = m;
        }
        return h;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/koko-eating-bananas/)