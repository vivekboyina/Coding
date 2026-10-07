# DOM3

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Domination

 *As always, Hyder seeks Order in Chaos. And finally, he thinks Domination is the only way. Help him out!* 

For a tree $G$, a subset $S$ of the vertices of $G$ is called a  **dominating set**  if, for every vertex $u$ in $G$, either $u\in S$ or there exists a vertex $v\in S$ such that $(u,v)$ is an edge in $G$.

You are given a tree with $N$ vertices.
Find the number of dominating sets of the tree containing exactly $N-3$ vertices.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line of each test case contains a single integer $N$, denoting the number of vertices in the tree. The next $N-1$ lines each contain two space-separated integers $u$ and $v$, denoting an undirected edge between vertices $u$ and $v$.
### Output Format

For each test case, output on a new line the number of dominating sets containing exactly $N-3$ vertices.

### Constraints
- $1 \leq T \leq 3\cdot 10^4$
- $4 \leq N \leq 2\cdot 10^5$
- $1 \leq u,v \leq N$
- The edges form a tree.
- The sum of $N$ over all test cases does not exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
3
4
1 2
1 3
1 4
5
1 2
2 3
3 4
4 5
9
8 3
8 5
5 1
8 6
6 4
3 7
1 9
7 2

```

```
1
3
61

```

### Explanation:

 **Test case $1$:**  We need dominating sets of size $1$. The only one is $\{1\}$, since vertex $1$ is adjacent to every other vertex. No other single vertex dominates the whole tree.

 **Test case $2$:**  We need dominating sets of size $2$. The valid sets are $\{2, 4\}$, $\{1, 4\}$ and $\{2, 5\}$. Every other pair leaves some vertex undominated.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T14:56:33.495Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

}

```

---

[View on CodeChef](https://www.codechef.com/problems/DOM3)