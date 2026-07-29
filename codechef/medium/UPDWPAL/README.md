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
**Submitted:** 2026-07-29T16:00:45.859Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;

// Function to check if a specific X can turn the array into a palindrome
bool isValidX(const vector<int>& A, long long X) {
    int i = 0, j = A.size() - 1;
    while (i < j) {
        long long val_i = (A[i] <= X) ? A[i] + 1 : A[i] - 1;
        long long val_j = (A[j] <= X) ? A[j] + 1 : A[j] - 1;
        if (val_i != val_j) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void solve() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++) {
        cin >> A[i];
    }

    int i = 0, j = n - 1;
    long long option1 = -1, option2 = -1;
    bool mismatch_found = false;

    // Find the first mismatched pair to narrow down the choices for X
    while (i < j) {
        if (A[i] != A[j]) {
            long long diff = abs(A[i] - A[j]);
            if (diff != 2) {
                // If the difference is not exactly 2, it can never match
                cout << "NO\n";
                return;
            }
            // To fix a difference of 2, X must match the smaller value
            option1 = min(A[i], A[j]);
            mismatch_found = true;
            break;
        }
        i++;
        j--;
    }

    // If the array is already a palindrome without any operation
    if (!mismatch_found) {
        cout << "YES\n";
        return;
    }

    // Check if our determined value for X satisfies the whole array
    if (isValidX(A, option1)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    // Fast I/O
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

[View on CodeChef](https://www.codechef.com/problems/UPDWPAL)