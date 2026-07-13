# Sequential Digits

![Difficulty](https://img.shields.io/badge/Difficulty-1373-red)

## Problem

An integer has  *sequential digits*  if and only if each digit in the number is one more than the previous digit.

Return a  **sorted**  list of all the integers in the range `[low, high]` inclusive that have sequential digits.

 

 **Example 1:** 

```
Input: low = 100, high = 300
Output: [123,234]

```

 **Example 2:** 

```
Input: low = 1000, high = 13000
Output: [1234,2345,3456,4567,5678,6789,12345]

```

 

 **Constraints:** 

- 10 <= low <= high <= 10^9

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 7.62%)  
**Memory:** 8.5 MB (beats 18.24%)  
**Submitted:** 2026-07-13T05:14:36.054Z  

```cpp
class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string s = "123456789";
        int i = 0;
        int j = 1;
        int k = j - i;
        long long curr = (s[i] - '0')*10 + (s[j] - '0');
        for(int p = 1; p < 36; p++)
        {
            if(curr >= low && curr <= high) ans.push_back(curr);
            curr = curr - (s[i] - '0')*pow(10,k);
            i++;
            j++;
            if(j >= 9)
            {
                i = 0;
                j = k + 1;
                k+=1;
                curr = 0;
                for(int l = i; l <= j; l++) curr = curr*10 + (s[l] - '0');
            }
            else curr = curr*10 + (s[j] - '0');
        }
        curr = 123456789;
        if(curr >= low && curr <= high) ans.push_back(curr);
        return ans;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/sequential-digits/)