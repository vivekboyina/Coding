# FLIP2K

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Fair Flipping (Easy)

 *This is the easy version of the problem. You only need to find the lexicographically minimum string reachable.* 

You're given a  **binary**  string $A$ of length $N$ and an integer $K$ ($1 \le 2K \le N$).

You can modify $A$ using the following operation:

- Choose a subsequence of $A$ with length $2K$ that contains exactly $K$ zeros and $K$ ones.
- Then, flip every character of the chosen subsequence: each $0$ becomes $1$ and each $1$ becomes $0$.

Your task is to find the lexicographically smallest$^\dagger$ string that $A$ can be converted into as a result of using this operation several (possibly, zero) times.

$^\dagger$A binary string $P$ of length $N$ is said to be lexicographically smaller than another binary string $Q$ of length $N$ if and only if there exists an index $i$ ($1 \le i \le N$) such that:

- $P_j = Q_j$ for each $1 \le j \lt i$; and
- $P_i = 0$ but $Q_i = 1$.
### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains two space-separated integers $N$ and $K$. The second line contains a binary string $A$ of length $N$.
### Output Format

For each test case, output on a new line the lexicographically smallest string that $A$ can be converted into.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 2\cdot 10^5$
- $1 \leq 2\cdot K \leq N$
- $A_i \in \{0, 1\}$
- The sum of $N$ over all test cases won't exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
4
3 1
010
4 2
1010
5 2
11011
6 2
000101

```

```
001
0101
11011
000011

```

### Explanation:

 **Test case $1$:**  $K = 1$, so each operation involves one $0$ and one $1$.
Perform one operation with indices $2$ and $3$. This turns the string into $\texttt{001}$ which is optimal.

 **Test case $2$:**  $K = 2$, so each operation involves two $0$'s and two $1$'s.
Perform one operation choosing all four indices. Every character flips, resulting in $\texttt{0101}$. This is optimal.

 **Test case $3$:**  $K = 2$, so each operation involves two $0$'s and two $1$'s.
It's impossible to even modify the given string since it only contains one $0$. Thus, the answer is the string itself, $\texttt{11011}$.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-15T16:11:21.299Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int k;
        cin >> k;
        string s;
        cin >> s;
        int z = 0;
        int o = 0;
        for(char i : s)
        {
            if(i == '0') z+=1;
            else o+=1;
        }
        if(z < k || o < k) cout << s << endl;
        else if(z == k && o == k)
        {
            if(s[0] == '0') cout << s << endl;
            else
            {
                for(int i = 0; i < n; i++)
                {
                    if(s[i] == '0') s[i] = '1';
                    else s[i] = '0';
                }
                cout << s << endl;
            }
        }
        else
        {
            for(int i = n - 1; i >= 0; i--)
            {
                if(o > 0)
                {
                    o-=1;
                    s[i] = '1';
                }
                else s[i] = '0';
            }
            cout << s << endl;
        }
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/FLIP2K)