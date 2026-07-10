# Valid Palindrome

![Difficulty](https://img.shields.io/badge/Difficulty-N/A-red)

## Problem

A phrase is a  **palindrome**  if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string `s`, return `true` *if it is a  **palindrome**, or* `false` *otherwise*.

 

 **Example 1:** 

```
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

```

 **Example 2:** 

```
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

```

 **Example 3:** 

```
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.

```

 

 **Constraints:** 

- 1 <= s.length <= 2 * 105
- s consists only of printable ASCII characters.

## Solution

**Language:** C++  
**Runtime:** 0 ms (beats 100.00%)  
**Memory:** 9.8 MB (beats 94.43%)  
**Submitted:** 2026-07-10T10:34:26.117Z  

```cpp
class Solution {
public:
    bool valid(char i)
    {
        if(i >= 'A' && i <= 'Z') return true;
        else if(i >= 'a' && i <= 'z') return true;
        else if(i >= '0' && i <= '9') return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i < j)
        {
            while(i < j && !valid(s[i])) i++;
            while(i < j && !valid(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};

```

---

[View on LeetCode](https://leetcode.com/problems/valid-palindrome/)