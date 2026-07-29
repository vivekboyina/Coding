# VALLFLAT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Valley Flattening

You're given an array $A$ of length $N$.
It is guaranteed that the elements of $A$ are  **pairwise distinct**, i.e. $A_i \ne A_j$ for $i \ne j$.

You can perform the following operation on the array:

- Choose an index $i$ ($1 \lt i \lt N$) such that $A_i \lt \min(A_{i-1}, A_{i+1})$.
- Then, set $A_{i-1}$ and $A_{i+1}$ both to have the value $A_i$.

That is, one operation involves choosing an element that's smaller than both its neighbors, and then overwriting both neighbors with the chosen element.

You can perform the given operation however many times you like (including zero times).
Find the  **minimum**  possible  **sum**  of the array $A$ after performing the operation any number of times.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$ — the length of the array. The second line contains $N$ space-separated integers $A_1, \ldots, A_N$.
### Output Format

For each test case, output on a new line the minimum possible sum of the array after performing some operations.

### Constraints
- $1 \leq T \leq 500$
- $3 \leq N \leq 2000$
- $1 \le A_i \le 2000$
- $A_i \ne A_j$ for $i \ne j$
- The sum of $N$ over all test cases won't exceed $2000$.
### Sample 1:
Input
Output

```
3
4
3 2 4 1
5
4 7 8 3 2
5
5 2 8 3 7

```

```
7
24
12

```

### Explanation:

 **Test case $1$:**  Choose $i = 2$, which is valid because $A_2 \lt \min(A_1, A_3)$. This turns the array into $[2, 2, 2, 1]$. No more operations can be performed, and the sum is $7$ which is the best we can do.

 **Test case $2$:**  No operations can be performed. The answer is just the sum of the array, $24$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-29T16:25:08.952Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>cc(n);
        for(int i = 0; i < n; i++) cin >> cc[i];
        vector<int>fi = cc;
        vector<int>se = cc;
        
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/VALLFLAT)