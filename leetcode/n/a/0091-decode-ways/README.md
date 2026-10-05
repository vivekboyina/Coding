# Decode Ways

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

You have intercepted a secret message encoded as a string of numbers. The message is  **decoded**  via the following mapping:

`"1" -> 'A'

"2" -> 'B'

...

"25" -> 'Y'

"26" -> 'Z'`

However, while decoding the message, you realize that there are many different ways you can decode the message because some codes are contained in other codes (`"2"` and `"5"` vs `"25"`).

For example, `"11106"` can be decoded into:

- "AAJF" with the grouping (1, 1, 10, 6)
- "KJF" with the grouping (11, 10, 6)
- The grouping (1, 11, 06) is invalid because "06" is not a valid code (only "6" is valid).

Note: there may be strings that are impossible to decode.

Given a string s containing only digits, return the  **number of ways**  to  **decode**  it. If the entire string cannot be decoded in any valid way, return `0`.

The test cases are generated so that the answer fits in a  **32-bit**  integer.

 

 **Example 1:** 

 **Input:**  s = "12"

 **Output:**  2

 **Explanation:** 

"12" could be decoded as "AB" (1 2) or "L" (12).

 **Example 2:** 

 **Input:**  s = "226"

 **Output:**  3

 **Explanation:** 

"226" could be decoded as "BZ" (2 26), "VF" (22 6), or "BBF" (2 2 6).

 **Example 3:** 

 **Input:**  s = "06"

 **Output:**  0

 **Explanation:** 

"06" cannot be mapped to "F" because of the leading zero ("6" is different from "06"). In this case, the string is not a valid encoding, so return 0.

 

 **Constraints:** 

- 1 <= s.length <= 100
- s contains only digits and may contain leading zero(s).

## Solution

**Language:** C++  
**Runtime:** 1 ms (beats 24.98%)  
**Memory:** 8.5 MB (beats 78.29%)  
**Submitted:** 2026-10-05T09:19:55.634Z  

```cpp
class Solution {
public:
    int numDecodings(string s) {
        if(s[0] == '0') return 0;
        int n = s.length();
        vector<int>dp(n,0);
        int k;
        dp[0] = 1;
        for(int i = 1; i < n; i++)
        {
            k = (s[i - 1] - '0')*10 + (s[i] - '0');
            if(k < 27)
            {
                if(k == 0) return 0;
                else if(k < 10) dp[i] = dp[i - 1];
                else if(k % 10 == 0)
                {
                    if(i > 1) dp[i] = dp[i - 2];
                    else dp[i] = 1;
                }
                else if(i > 1) dp[i] = dp[i - 2] + dp[i - 1];
                else dp[i] = dp[i - 1] + 1;
            }
            else if(k % 10 == 0) return 0;
            else dp[i] = dp[i - 1];
        }
        return dp[n - 1];
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/decode-ways/)