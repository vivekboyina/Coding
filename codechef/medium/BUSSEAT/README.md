# BUSSEAT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Bus Seating

There is a bus with $N$ rows of seats, each row having exactly $2$ seats.

$K$ ($1 \le K \le 2 N$) people enter the bus, one by one. Each of them try to sit in an empty row, but if they are unable to, they seat next to somebody else.

Find the number of people who end up sitting next to somebody else.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains $2$ integers $N$ and $K$.
### Output Format

For each test case, output on a new line the number of people who end up sitting next to somebody else.

### Constraints
- $1 \le T \le 10100$
- $1 \le N \le 100$
- $1 \le K \le 2 \cdot N$
### Sample 1:
Input
Output

```
3
2 3
2 1
4 8

```

```
2
0
8
```

### Explanation:

 **Test Case 1:**  One way it can happen is : Person $1$ sits in row $1$, person $2$ sits in row $2$, and then person $3$ also sits in row $1$.

Hence, persons $1$ and $3$ share a row in this instance, so there are $2$ people sitting next to somebody.

 **Test Case 2:**  Only $1$ person is on the bus, so nobody is sitting next to him.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T14:33:47.230Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,k;
	    cin >> n >> k;
	    k-=n;
	    if(k > 0) cout << k*2 << endl;
	    else cout << 0 << endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/BUSSEAT)