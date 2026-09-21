# Letter Tile Possibilities

![Difficulty](https://img.shields.io/badge/Difficulty-1740-red)

## Problem

You have `n`  `tiles`, where each tile has one letter `tiles[i]` printed on it.

Return  *the number of possible non-empty sequences of letters*  you can make using the letters printed on those `tiles`.

 

 **Example 1:** 

```
Input: tiles = "AAB"
Output: 8
Explanation: The possible sequences are "A", "B", "AA", "AB", "BA", "AAB", "ABA", "BAA".

```

 **Example 2:** 

```
Input: tiles = "AAABBC"
Output: 188

```

 **Example 3:** 

```
Input: tiles = "V"
Output: 1

```

 

 **Constraints:** 

- 1 <= tiles.length <= 7
- tiles consists of uppercase English letters.

## Solution

**Language:** C++  
**Runtime:** 30 ms (beats 29.56%)  
**Memory:** 16.7 MB (beats 29.56%)  
**Submitted:** 2026-09-21T12:21:07.513Z  

```cpp
class Solution {
public:
    unordered_set<string>st;
    void bkt(vector<bool>&usd,string &sm,string &tls,int &n)
    {
        if(sm.length() > 0) st.insert(sm);
        for(int i = 0; i < n; i++)
        {
            if(usd[i]) continue;
            usd[i] = true;
            sm.push_back(tls[i]);
            bkt(usd,sm,tls,n);
            sm.pop_back();
            usd[i] = false;
        }
        return;
    }
    int numTilePossibilities(string tls) {
        int n = tls.length();
        vector<bool>usd(n,false);
        string sm = "";
        bkt(usd,sm,tls,n);
        return st.size();
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/letter-tile-possibilities/)