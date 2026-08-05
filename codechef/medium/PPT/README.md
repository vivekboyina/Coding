# PPT

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Presentation

Chef needs to give a presentation that lasts exactly $10$ minutes (or $600$ seconds). He will prepare a slide show containing some number of slides for the presentation.

He knows that he takes exactly $30$ seconds to cover each slide. He has already made $N$ slides. How many more slides does he need to make so that his presentation lasts exactly $10$ minutes?

### Input Format
- The first and only line of input contains a single integer $N$ - the number of slides Chef has already made.
### Output Format

Output the number of slides Chef still has to make.

### Constraints
- $0 \le N \le 20$
### Sample 1:
Input
Output

```
10

```

```
10

```

### Explanation:

Chef's $10$ slides only take $300$ seconds, so he needs to another $10$ slides.

### Sample 2:
Input
Output

```
0

```

```
20

```

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-05T14:36:13.022Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin >> n;
	cout << (20 - n);
}

```

---

[View on CodeChef](https://www.codechef.com/problems/PPT)