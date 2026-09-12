# Union of 2 Sorted Arrays

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given two sorted arrays  **a[]**  and  **b[]**, where each array may contain duplicate elements, the task is to return the elements in the union of the two arrays in sorted order. Union of two arrays can be defined as the set containing distinct elements that are present in either of the arrays.

 **Examples:** 

```
Input: a[] = [1, 2, 3, 4, 5], b[] = [1, 2, 3, 6, 7]
Output: [1, 2, 3, 4, 5, 6, 7]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5 6 7.
```

```
Input: a[] = [2, 2, 3, 4, 5], b[] = [1, 1, 2, 3, 4]
Output: [1, 2, 3, 4, 5]
Explanation: Distinct elements including both the arrays are: 1 2 3 4 5.
```

```
Input: a[] = [1, 1, 1, 1, 1], b[] = [2, 2, 2, 2, 2]
Output: [1, 2]
Explanation: Distinct elements including both the arrays are: 1 2.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-12T13:18:38.699Z  

```cpp
class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        map<int,int>mp;
        for(int i : a) mp[i]+=1;
        for(int i : b) mp[i]+=1;
        vector<int>ans;
        for(auto it : mp) ans.push_back(it.first);
        return ans;
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1)