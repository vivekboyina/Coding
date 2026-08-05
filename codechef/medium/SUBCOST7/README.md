# SUBCOST7

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Subscription Cost

Chef has subscribed to his favourite channel, and their payment policy is as follows:

- For the first $3$ months, the cost is $X$ rupees per month.
- For all following months, the cost is $Y$ rupees per month.

Chef plans to subscribe for $N$ months. Find the total cost Chef has to pay

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- The first and only line of each test case contains $3$ integers - $N$, $X$ and $Y$.
### Output Format

For each test case, output on a new line the total cost Chef has to pay.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 50$
- $100 \le X \lt Y \le 500$
### Sample 1:
Input
Output

```
3
2 100 200
5 100 200
5 200 300

```

```
200
700
1200
```

### Explanation:

 **Test Case 1:**  Chef is only subscribing for $2$ months, so he only pays the $X = 100$ per month rate, which is $100 \times 2 = 200$.

 **Test Case 2:**  Chef pays $100$ for $3$ months and $200$ for $2$ months, thus totaling $300 + 400 = 700$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-05T14:34:45.811Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,a,b;
	    cin >> n >> a >> b;
	    int ans = 0;
	    if(n < 4) ans = n*a;
	    else ans = 3*a + (n - 3)*b;
	    cout << ans << endl;
	}
}

```

---

[View on CodeChef](https://www.codechef.com/problems/SUBCOST7)