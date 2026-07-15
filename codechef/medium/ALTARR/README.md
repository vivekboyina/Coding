# ALTARR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Alternating Array

You have an array $A$ of $N$ integers. You want to make it alternating, i.e. the parity of the elements should keep switching. For example, $[1, 2, 3, 6, 5]$ is valid because it goes Odd, even, odd, even, odd.

Find the minimum changes you need to make to the array to make it valid. Each change is of the form: choose some index $i$, and set $A_i$ to any integer you want.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the minimum changes needed to be made to the array.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
2
3
1 1 1
3
4 3 6

```

```
1
0

```

### Explanation:

 **Test Case 1:**  You can edit $A_2$ to be $2$, to get $[1, 2, 1]$ and only $1$ change.

 **Test Case 2:**  The given array is already valid.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-15T14:36:14.185Z  

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
	    int ans = 0;
	    for(int i = 1; i < n; i++)
	    {
	        if((arr[i - 1] % 2 == 0 && arr[i] % 2 == 0) || (arr[i - 1] % 2 != 0 && arr[i] % 2 != 0))
	        {
	            ans+=1;
	            arr[i]+=1;
	        }
	    }
	    cout << ans << endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/ALTARR)