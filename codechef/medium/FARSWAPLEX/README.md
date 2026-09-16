# FARSWAPLEX

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Far Swapping (Ver 1)

You are given a permutation $P$ of the integers $[1, N]$. You can use the following operation as many times as you want:

- Choose an index $i$ ($1 \le i < N$) such that $|P_i - P_{i + 1}| > 1$
- Swap $P_i$ and $P_{i + 1}$.

Find the lexicographically minimal permutation that is possible using the above operations.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $P_1, P_2, \ldots, P_N$.
### Output Format

For each test case, output $N$ integers - the lexicographically minimal permutation reachable by the operations.

### Constraints
- $1 \le T \le 10^4$
- $2 \le N \le 3000$
- $1 \le P_i \le N$
- $P_i \ne P_j$ for all $i \ne j$
- The sum of $N^2$ over all test cases does not exceed $3000^2$
### Sample 1:
Input
Output

```
3
3
1 3 2
3
3 2 1
5
5 2 3 1 4

```

```
1 3 2
3 2 1
2 1 3 5 4
```

### Explanation:

 **Test Case 1:**  $[1, 3, 2]$ and $[3, 1, 2]$ are reachable. The former is just the original permutation itself, and the latter can be reached by swapping $P_1$ and $P_2$. Note that $2 = P_3$ cannot be swapped with anybody due to the absolute difference $> 1$ condition.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-09-16T15:11:35.490Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int t;
	cin >> t;
	while(t--)
	{
	    int n;
	    cin >> n;
	    vector<int>cc(n);
	    for(int i = 0; i < n; i++) cin >> cc[i];
	    int j;
	    for(int i = 1; i < n - 1; i++)
	    {
	        if(cc[i] - cc[i + 1] > 1)
	        {
	            j = i;
	            while(j < n - 1 && cc[j] - cc[j + 1] > 1)
	            {
	                swap(cc[j],cc[j + 1]);
	                j++;
	            }
	        }
	        if(cc[i - 1] - cc[i] > 1)
	        {
	            j = i;
	            while(j > 0 && cc[j - 1] - cc[j] > 1)
	            {
	                swap(cc[j],cc[j - 1]);
	                j--;
	            }
	        }
	    }
	    for(int i : cc) cout << i << " ";
	    cout << endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/FARSWAPLEX)