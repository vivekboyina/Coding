# EXACTKMOVES

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Exactly K Moves

Chef is climbing a staircase with $N$ steps. In one move, he climbs either $1$ step or $2$ steps.

Chef's fitness watch wants him to reach the top of the staircase (step $N$) in  **exactly**  $K$ moves. He must not go past the top.

Determine whether this is possible.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains two space-separated integers $N$ and $K$ — the number of steps and the required number of moves.
### Output Format

For each test case, output on a new line `YES` if Chef can reach the top in exactly $K$ moves, and `NO` otherwise.

Each letter of the output may be printed in either uppercase or lowercase, i.e., the strings `NO`, `no`, `nO`, and `No` will all be treated as equivalent.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq N, K \leq 1000$
### Sample 1:
Input
Output

```
4
5 3
5 2
3 4
4 2

```

```
YES
NO
NO
YES

```

### Explanation:

 **Test case $1$:**  Chef can climb $2$, $2$ and then $1$ steps.

 **Test case $2$:**  In $2$ moves, Chef climbs at most $4$ steps, so he cannot reach step $5$.

 **Test case $3$:**  In $4$ moves, Chef climbs at least $4$ steps, which is more than the $3$ steps of the staircase.

 **Test case $4$:**  Chef climbs $2$ steps twice.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-25T15:50:02.501Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	
}

```

---

[View on CodeChef](https://www.codechef.com/problems/EXACTKMOVES)