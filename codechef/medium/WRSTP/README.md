# WRSTP

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### One Wrong Step

Nikhil is programming a robot that starts at the coordinates $(0,0)$ on a 2D plane. He provides the robot with a string of $N$ moves, where each character represents a single step.
If the robot is currently at $(x, y)$ then:

- U $\rightarrow$ $(x, y+1)$
- D $\rightarrow$ $(x, y-1)$
- L $\rightarrow$ $(x-1, y)$
- R $\rightarrow$ $(x+1, y)$

Nikhil believes that  **exactly one**  move in the string was entered incorrectly.
He can thus replace exactly one move by its direct opposite:

- U can be replaced with D, and vice versa (U $\leftrightarrow$ D).
- L can be replaced with R, and vice versa (L $\leftrightarrow$ R).

Determine whether it is possible for the robot to end its journey exactly at the origin $(0, 0)$ after correcting  **exactly one**  move in the string.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$, denoting the number of moves. The second line contains a string of length $N$ consisting only of the characters U, D, L, and R.
### Output Format

For each test case, output on a new line `YES` if it is possible for the robot to end at $(0,0)$ after changing exactly one move to its opposite, and `NO` otherwise.

You may print each character of the answer in uppercase or lowercase. For example, `YES`, `yes`, `Yes`, and `yEs` will all be treated as identical.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- Each character of the string is one of U, D, L, R.
### Sample 1:
Input
Output

```
5
4
UDRR
2
UD
3
UUU
4
UURR
4
DDLR

```

```
YES
NO
NO
NO
YES

```

### Explanation:

 **Test case $1$:**  The robot ends at $(2, 0)$ after $\texttt{UDRR}$. Changing the last $\texttt{R}$ to $\texttt{L}$ gives $\texttt{UDRL}$, which ends at $(0, 0)$.

 **Test case $2$:**  $\texttt{UD}$ already ends at $(0, 0)$, but exactly one move must be changed. The only possible results are $\texttt{DD}$ (changing the first move) and $\texttt{UU}$ (changing the second move). Neither ends at $(0, 0)$.

 **Test case $3$:**  Changing exactly one move is not sufficient to end at $(0, 0)$.

 **Test case $4$:**  Changing exactly one move is not sufficient to end at $(0, 0)$.

 **Test case $5$:**  $\texttt{DDLR}$ ends at $(0, -2)$. Changing the first $\texttt{D}$ to $\texttt{U}$ gives $\texttt{UDLR}$, which ends at $(0, 0)$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-07T14:41:54.685Z  

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
	    int u = 0;
	    int d = 0;
	    int r = 0;
	    int l = 0;
	    for(char i : s)
	    {
	        if(i == 'U') u+=1;
	        else if(i == 'D') d+=1;
	        else if(i == 'L') l+=1;
	        else r+=1;
	    }
	    if((abs(u - d) == 2 && abs(l - r) == 0) || abs(u - d) == 0 && abs(l - r) == 2) cout << "YES\n";
	    else cout << "NO\n";
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/WRSTP)