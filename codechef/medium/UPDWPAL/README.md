# UPDWPAL

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Up-Down Palindrome

You're given an array $A$ of length $N$.

You can perform the following operation on it:

- Choose an integer $X$.
- Then, for each index $i$ ($1 \le i \le N$), If $A_i \le X$, add $1$ to $A_i$. Otherwise, subtract $1$ from $A_i$.

For example, if $A = [2, 6, 3, 4, 3]$ and you choose $X = 3$, the array becomes $[3, 5, 4, 3, 4]$.

You can perform this operation  **at most once**, but you are free to choose whichever value of $X$ you want.

Is it possible to turn the array $A$ into a palindrome by performing this operation  **at most once** ?

Note that the array $A$ is called a palindrome if and only if $A_i = A_{N+1-i}$ for each $1 \le i \le N$.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains a single integer $N$ — the length of the array. The second line contains $N$ space-separated integers $A_1, \ldots, A_N$.
### Output Format

For each test case, output on a new line the answer: `Yes` if the array can be turned into a palindrome, and `No` otherwise.

Each character of the output can be printed in either uppercase or lowercase, i.e. the strings `NO`, `No`, `nO`, and `no` will be considered equivalent.

### Constraints
- $1 \leq T \leq 10^5$
- $1 \leq N \leq 2\cdot 10^5$
- $1 \le A_i \le 10^9$
- The sum of $N$ across all tests won't exceed $2\cdot 10^5$.
### Sample 1:
Input
Output

```
3
3
1 3 1
4
4 3 5 6
4
4 2 4 1

```

```
Yes
Yes
No

```

### Explanation:

 **Test case $1$:**  The array is already a palindrome.

 **Test case $2$:**  Choose $X = 4$. This turns the array into $[5, 4, 4, 5]$ which is a palindrome.

 **Test case $3$:**  It can be verified that no value of $X$ will allow $A$ to be turned into a palindrome.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-29T15:50:36.600Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

bool check(vector<int>cc,int i,int j,int n)
{
    if(cc[i] > n) cc[i]-=1;
    else cc[i]+=1;
    if(cc[j] > n) cc[j]-=1;
    else cc[j]+=1;
    return cc[i] == cc[j];
}

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int>cc(n);
        for(int i = 0; i < n; i++) cin >> cc[i];
        int i = 0;
        int j = n - 1;
        bool ans = true;
        int o = -1,s = -1;
        int diff;
        int usd = -1;
        while(i <= j)
        {
            diff = abs(cc[i] - cc[j]);
            if(ans == false) break;
            if(diff == 1 || diff > 2)
            {
                ans = false;
                break;
            }
            if(diff == 2)
            {
                if(o == -1 && s == -1)
                {
                    o = min(cc[i],cc[j]);
                    s = o + 1;
                }
                else if(usd != -1) ans = check(cc,i,j,usd);
                else
                {
                    ans = check(cc,i,j,o);
                    if(ans) usd = o;
                    else
                    {
                        ans = check(cc,i,j,s);
                        if(ans) usd = s;
                        else ans = false;
                    }
                }
            }
            i++;
            j--;
            
        }
        if(ans) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/UPDWPAL)