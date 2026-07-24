# Guess Number Higher or Lower

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

We are playing the Guess Game. The game is as follows:

I pick a number from `1` to `n`. You have to guess which number I picked (the number I picked stays the same throughout the game).

Every time you guess wrong, I will tell you whether the number I picked is higher or lower than your guess.

You call a pre-defined API `int guess(int num)`, which returns three possible results:

- -1: Your guess is higher than the number I picked (i.e. num > pick).
- 1: Your guess is lower than the number I picked (i.e. num < pick).
- 0: your guess is equal to the number I picked (i.e. num == pick).

Return  *the number that I picked*.

 

 **Example 1:** 

```
Input: n = 10, pick = 6
Output: 6

```

 **Example 2:** 

```
Input: n = 1, pick = 1
Output: 1

```

 **Example 3:** 

```
Input: n = 2, pick = 1
Output: 1

```

 

 **Constraints:** 

- 1 <= n <= 231 - 1
- 1 <= pick <= n

## Solution

**Language:** C++  
**Runtime:** 2 ms (beats 55.79%)  
**Memory:** 7.9 MB (beats 44.82%)  
**Submitted:** 2026-07-24T15:58:16.736Z  

```cpp
class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int h = n;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(guess(m) == 0) return m;
            else if(guess(m) == -1) h = m - 1;
            else l = m + 1;
        }
        return -1;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/guess-number-higher-or-lower/)