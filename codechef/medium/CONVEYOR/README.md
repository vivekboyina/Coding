# CONVEYOR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Conveyor Belt

There is a conveyor belt with $N$ slots, numbered from $1$ to $N$. There is also a collection point at each end of the belt, located at positions $0$ and $N+1$.

Each slot has a direction:

- L, which moves the object one position to the left;
- R, which moves the object one position to the right.

An object will be placed at slot $P$. It repeatedly moves according to the direction of its current slot until it reaches one of the two collection points.

Before placing the object, you may reverse the direction of any number of slots, changing `L` to `R` or `R` to `L`.

Find the minimum number of slots whose directions must be reversed so that the object eventually reaches a collection point.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line contains two space-separated integers $N$ and $P$, denoting the number of slots and the starting position of the object, respectively. The second line contains a string $S$ of length $N$, where $S_i$ denotes the direction of the $i$-th slot.
### Output Format

For each test case, output on a new line the minimum number of slots whose directions must be reversed.

### Constraints
- $1 \leq T \leq 100$
- $1 \leq N \leq 100$
- Every character of $S$ is either L or R.
### Sample 1:
Input
Output

```
3
4 2
LRLR
5 3
LLRRR
8 5
RRLLRLRL

```

```
1
0
2

```

### Explanation:
- Test case 1: Reversing either slot $2$ or slot $3$ allows the object to reach a collection point. Hence, the answer is $1$.
- Test case 2: The object already moves right and reaches the collection point at $6$. Hence, no reversals are required.
- Test case 3: Reverse slots $6$ and $8$. The object then moves right until it reaches the collection point at $9$, so the answer is $2$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-15T14:57:15.322Z  

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
	    int st;
	    cin >> st;
	    string s;
	    cin >> s;
	    if(st == 0) cout << s[st] == 'L' ? 0 : 1 << endl;
	    else if(st == n - 1) cout << s[st] == 'R' ? 0 : 1 << endl;
	    else
	    {
	        int ll = 0,rl = 0;
	        int lr = 0,rr = 0;
	        for(int i = 0; i <= st; i++)
	        {
	            if(s[i] == 'L') ll++;
	            else rl++;
	        }
	        for(int i = st; i < n; i++)
	        {
	            if(s[i] == 'L') lr++;
	            else rr++;
	        }
	        cout << min(abs(ll - rl),abs(lr - rr)) << endl;
	    }
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/CONVEYOR)