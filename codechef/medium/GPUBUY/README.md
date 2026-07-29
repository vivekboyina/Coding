# GPUBUY

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Buying GPU

Chef wants to buy a GPU. The cost of the GPU is initially $X$ coins.

Chef starts out with $0$ coins.

Every month, the following two things will happen  **in order** :

- First, the price of the GPU will increase by $Y$ coins.
- Then, Chef will earn $Z$ coins.

Chef will buy the GPU immediately when his total number of coins is greater than or equal to the current price of the GPU.

Find the number of months it will take for Chef to buy the GPU.
If he will never be able to buy the GPU, print $-1$ instead.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of a single line of input, containing $3$ space-separated integers $X, Y,$ and $Z$ — the initial price of the GPU, the increase in the GPU's price each month, and the number of coins Chef earns every month.
### Output Format

For each test case, output on a new line the number of months it will take for Chef to buy the GPU; or $-1$ if he can never buy it.

### Constraints
- $1 \leq T \leq 1000$
- $1 \leq X, Y, Z \leq 100$
### Sample 1:
Input
Output

```
4
5 1 2
5 3 3
6 2 9
100 99 100

```

```
5
-1
1
100

```

### Explanation:

 **Test case $1$:**  The steps are as follows.

- Initially, the GPU costs $X=5$ and Chef has $0$ coins.
- Month $1$: The GPU's cost increases by $Y=1$ to become $6$. Chef earns $Z=2$ coins and has $2$ coins in total.
- Month $2$: The GPU's cost increases by $Y=1$ to become $7$. Chef earns $Z=2$ coins and has $4$ coins in total.
- Month $3$: The GPU's cost increases by $1$ to become $8$. Chef earns $2$ coins and has $6$ coins in total.
- Month $4$: The GPU's cost increases by $1$ to become $9$. Chef earns $2$ coins and has $8$ coins in total.
- Month $5$: The GPU's cost increases by $1$ to become $10$. Chef earns $2$ coins and has $10$ coins in total. This is now enough to buy the GPU.

 **Test case $2$:**  Chef will never be able to buy the GPU since its price increases too quickly.

 **Test case $3$:**  The GPU starts off at a price of $6$ coins.
In the first month, its price increases by $Y=2$ to become $8$ coins. Chef earns $Z=9$ coins, which immediately lets him buy the GPU. So the answer is $1$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-29T14:40:20.235Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int x,y,z;
	    cin >> x >> y >> z;
	    int st = 0;
	    if(y >= z && x > 0)
	    {
	        cout << -1 << endl;
	        continue;
	    }
	    int ans = 0;
	    while(st < x)
	    {
	        st+=z;
	        x+=y;
	        ans+=1;
	    }
	    cout << ans << endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/GPUBUY)