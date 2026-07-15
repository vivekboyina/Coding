# STRINGSHIFT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Substring Shift

You are given a string $S$ consisting of lowercase English letters. You may perform the following operation at most once:

- Choose a non-empty contiguous substring and replace each character in it with the next letter of the alphabet, cyclically; that is, a becomes b, b becomes c, and so on, while z becomes a.

All characters outside the chosen substring remain unchanged.

Find the lexicographically smallest string that can be obtained.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$, denoting the length of the string. The second line contains a string $S$ of length $N$, consisting of lowercase English letters.
### Output Format

For each test case, output on a new line the lexicographically smallest string that can be obtained.

### Constraints
- $1 \leq T \leq 10^4$
- $1 \leq N \leq 2\cdot10^5$
- $S_i \in \{{\texttt{a}, \texttt{b}, \ldots, \texttt{z}}\}$ for each $1 \leq i \leq N$.
- The sum of $N$ over all test cases won't exceed $2\cdot10^5$.
### Sample 1:
Input
Output

```
3
4
izbz
3
aba
4
zzbb

```

```
iabz
aba
aabb

```

### Explanation:
- Test case 1: Shift the substring $[2,2]$, changing z to a and obtaining iabz.
- Test case 2: Performing no operation gives the smallest possible string, aba.
- Test case 3: Shift the substring $[1,2]$ to obtain aabb.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-15T15:10:09.859Z  

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
	    string s;
	    cin >> s;
	    
	}
}
```

---

[View on CodeChef](https://www.codechef.com/problems/STRINGSHIFT)