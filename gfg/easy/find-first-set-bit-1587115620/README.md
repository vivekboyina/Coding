# First Set Bit

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer  **n.**  You have to return the position of the first set bit  from the  **right** side in the binary representation of the number. If there is no set bit in the integer N, then return 0 from the function.  

 **Examples:** 

```
Input: n = 18
Output: 2
Explanation: Binary representation of 18 is 010010,the first set bit from the right side is at position 2.
```

```
Input: n = 12
Output: 3 
Explanation: Binary representation of  12 is 1100, the first set bit from the right side is at position 3.

```

```
Input: n = 1
Output: 1
Explanation: Binary representation of  1 is 1, the first set bit from the right side is at position 1.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-21T04:51:56.106Z  

```cpp
class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int ans = 1;
        while(n)
        {
            if((n & 1) ^ 1 == 0) return ans;
            ans+=1;
            n = n >> 1;
        }
        return 0;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/find-first-set-bit-1587115620/1)