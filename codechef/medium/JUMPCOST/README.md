# JUMPCOST

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Jumping Cost

You have an array $A$ of $N$ elements.

You are currently at index $1$ with a balance of $0$, and you can do the following jump operation as many times as you want:

- Choose to jump from index $i$ to index $j$ ($i < j$), and add $(A_j - j + i)$ to your balance.

Find the maximum possible balance you can have at any point using these jump operations.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the maximum balance you can have.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $-100 \le A_i \le 100$
### Sample 1:
Input
Output

```
3
6
5 5 -1 5 -1 1
5
5 5 5 5 5
3
-4 -1 -5

```

```
7
16
0

```

### Explanation:

 **Test Case 1:**  Optimal is to jump from index $1$ to $2$ and then to $4$.

 **Test Case 3:**  Optimal is to not take any jumps at all.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-08-05T15:31:51.678Z  

```c_cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    // dp[j] will store the max balance at index j
    vector<long long> dp(n + 1, 0);
    
    // We want to maximize dp[i] + i for previous indices
    // For i = 1, initial balance is 0, so dp[1] = 0, term is dp[1] + 1 = 1.
    // But wait, can we choose not to jump? The problem says "maximum possible balance you can have at any point",
    // and a valid balance can start at 0 (by taking 0 jumps).
    
    long long max_prev = 0; // represents max(dp[i] + i)
    long long global_max = 0; // since we can always choose a max balance of 0 (no jumps)

    for (int j = 1; j <= n; j++) {
        if (j == 1) {
            dp[1] = 0; // starting point
        } else {
            // dp[j] = (a[j] - j) + max_{1 <= i < j} (dp[i] + i)
            dp[j] = (a[j] - j) + max_prev;
        }
        
        // Update global maximum balance found so far
        global_max = max(global_max, dp[j]);
        
        // Update max_prev to include the current index j for future j's
        max_prev = max(max_prev, dp[j] + j);
    }

    cout << global_max << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
```

---

[View on CodeChef](https://www.codechef.com/problems/JUMPCOST)