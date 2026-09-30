# SEATING7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Seating

There are $N$ seats numbered $1$, $2$, $\ldots$, $N$, and $M$ of them are already occupied - seats numbered $A_1, A_2, \ldots, A_M$.

$K$ more people will enter one by one, and each of them will occupy the lowest numbered seat that is available. For each of these $K$ people, find the seat number where they will seat.

It is guaranteed that there are at least $K$ seats empty.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains $3$ integers - $N$, $M$ and $K$. The second line contains $M$ integers - $A_1, A_2, \ldots, A_M$.
### Output Format

For each test case, output on a new line $K$ integers - the seat numbers where each of the new people will sit, in order.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $1 \le M, K \le N$
- $M + K \le N$
- $1 \le A_i \le N$
- $A_i \lt A_{i + 1}$
### Sample 1:
Input
Output

```
3
4 2 2
1 3
6 2 3
3 4
5 1 1
5

```

```
2 4
1 2 5
1
```

### Explanation:

 **Test Case 1:**  Person $1$ comes and notices seat $1$ is already taken, and so sits in seat numbered $2$. Person $2$ comes and notices seats $1$, $2$ and $3$ are taken, and hence sits in $4$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-30T14:41:52.477Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m,k;
	    cin >> n >> m >> k;
	    vector<int>cc(m);
	    for(int i = 0; i < m; i++) cin >> cc[i];
	    vector<bool>usd(n,false);
	    for(int i = 0; i < m; i++) usd[cc[i] - 1] = true;
	    vector<int>ans;
	    for(int i = 0; i < n; i++) if(usd[i] == false) ans.push_back(i + 1);
	    for(int i = 0; i < k; i++) cout << ans[i] << " ";
	    cout << endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SEATING7)