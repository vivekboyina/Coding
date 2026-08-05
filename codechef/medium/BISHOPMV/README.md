# BISHOPMV

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Bishop Moves

You have a chessboard of size $8 \times 8$, where the cells are numbered $(1, 1), (1, 2), \ldots, (1, 8), \ldots, (8, 1), \ldots, (8, 8).$

A bishop is a chess piece which travels along diagonals (between any $2$ cells in the same diagonal in a single move). A diagonal can be of $2$ types:

- a set of cells $(x, y)$ where $x + y$ is constant.
- a set of cells $(x, y)$ where $x - y$ is constant.

For example, $\{(1, 2), (2, 3), (3, 4), (4, 5), (5, 6), (6, 7), (7, 8)\}$ form a diagonal.

You are given $2$ cells $(X_1, Y_1)$ and $(X_2, Y_2)$. Can a bishop starting in the first cell reach the second? If it can, what is the minimum number of moves.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line contains $4$ integers $X_1$, $Y_1$, $X_2$ and $Y_2$.
### Output Format

For each test case, output on a new line the minimum moves needed or $-1$ if impossible.

### Constraints
- $1 \le T \le 100$
- $1 \le X_1, Y_1, X_2, Y_2 \le 8$
- $(X_1, Y_1) \ne (X_2, Y_2)$
### Sample 1:
Input
Output

```
4
1 2 7 8
2 1 1 2
1 2 3 6
1 2 2 2

```

```
1
1
2
-1
```

### Explanation:

 **Test Case 1:**  $(1, 2)$ and $(7, 8)$ are on the same diagonal, and hence can be reached in $1$ move.

 **Test Case 3:**  The bishop can first go like $(1, 2) \rightarrow (4, 5) \rightarrow (3, 6)$, thus reaching in $2$ steps.

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-05T14:54:45.726Z  

```cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x1,y1,x2,y2;
	    cin >> x1 >> y1 >> x2 >> y2;
	    
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BISHOPMV)