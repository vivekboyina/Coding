# PRDEXC

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Product Exceed

You are given three integers $X, Y,$ and $P$.

In one move, you can  *either*  increment $X$ by $1$  *or*  increment $Y$ by $1$.

Find the minimum number of moves needed to reach a state where the product of $X$ and $Y$ is greater than or equal to $P$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input, containing three space-separated integers $X, Y,$ and $P$.
### Output Format

For each test case, output on a new line the minimum number of operations needed for the product of $X$ and $Y$ to become $\ge P$.

### Constraints
- $1 \leq T \leq 1000$
- $1 \le X, Y \le 50$
- $1 \le P \le 10^4$
### Sample 1:
Input
Output

```
3
5 3 17
2 7 10
9 1 29

```

```
1
0
3

```

### Explanation:

 **Test case $1$:**  We have $X = 5$ and $Y = 3$.
We can use one move to increment $X$, to reach $X = 6$ and $Y = 3$.
The product of $X$ and $Y$ is now $6\times 3 = 18$, which is not smaller than $17$.

 **Test case $2$:**  $2\times 7 = 14$ is already $\ge 10 = P$, so no operations are needed.

 **Test case $3$:**  Increment $X$ one time and increment $Y$ two times, to reach $X = 10$ and $Y = 3$ with a product of $30$.
It can be verified that this is the minimum number of operations needed.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-29T14:47:52.272Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int x,y,p;
        cin >> x >> y >> p;
        int ans = 0;
        while(x*y < p)
        {
            if((x + 1)*y > (y + 1)*x) x+=1;
            else y+=1;
            ans+=1;
        }
        cout << ans << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/PRDEXC)