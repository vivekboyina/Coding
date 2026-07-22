# SWAPSM

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Swap Small

You have an array $A$ consisting of $N$ integers such that $0 \le A_i \le 2$.

You can do the following operation multiple times:

- Choose an index $i$ ($1 \le i < N$) such that $A_i + A_{i + 1} \le 2$
- Swap $A_i$ and $A_{i + 1}$.

Find the lexicographically smallest array $A$ possible with these swaps.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the lexicographically smallest array possible.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $0 \le A_i \le 2$
### Sample 1:
Input
Output

```
2
4
1 0 2 1
5
2 2 2 0 0

```

```
0 1 2 1
0 0 2 2 2
```

### Explanation:

 **Test Case 1:**  Swap $A_1$ and $A_2$ to get $[0, 1, 2, 1]$. This is the minimal array possible, and there are no other operations possible. For example, we cannot swap $A_3$ and $A_4$ because they sum to $3$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-22T15:06:08.485Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    bool sw = true;
	    while(sw)
	    {
	        sw = false;
	        for(int i = 1; i < n; i++) 
	        {
	            if(arr[i] < arr[i - 1] && arr[i] + arr[i - 1] < 3)
	            {
	                swap(arr[i],arr[i - 1]);
	                sw = true;
	            }
	        }
	    }
	    for(int i : arr) cout << i << " ";
	    cout << endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SWAPSM)