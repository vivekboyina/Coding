# ALARMM

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Alarmmm

 *After escaping the abandoned arcade, Nikhil follows a narrow passage beneath the building and discovers an abandoned orbital station hidden underground. At its entrance lies a sealed security corridor, still guarded by an ancient system.* 

The corridor contains $N$ rooms arranged in a straight line. Some rooms still contain hostile sentry drones, and Nikhil must restore the station's security system before he can reach the control deck.

A binary string $S$ describes the corridor: $S_i=1$ means that the $i$-th room is dangerous, while $S_i=0$ means that it is safe.

Nikhil can install alarms in some of the rooms.
An alarm installed at room $p$ ($1 \le p \le N$) protects all the rooms from $\max(1, p-K)$ through to $p$, inclusive of both ends.

An alarm protects the room where it is installed and rooms to its left; it does not protect any room to its right.

Determine the  **minimum**  number of alarms needed to protect every dangerous room.

### Input Format
- The first line of input contains a single integer $T$, the number of test cases.
- Each test case consists of two lines of input. The first line of each test case contains two integers $N$ and $K$. The second line contains a binary string $S$ of length $N$.
### Output Format

For each test case, print one integer: the minimum number of alarms required to protect every dangerous room.

### Constraints
- $1 \le T \le 100$
- $1 \le N \le 100$
- $0 \le K \le N$
- $S$ consists only of the characters 0 and 1.
### Sample 1:
Input
Output

```
4
5 2
00100
6 1
101010
8 0
01101001
7 3
1000011

```

```
1
3
4
2
```

### Explanation:

 **Test case $1$:**  Room $3$ is the only dangerous room. An alarm installed in room $3$ protects it.

 **Test case $2$:**  Alarms installed in rooms $1$, $3$ and $5$ protect all the dangerous rooms. It can be verified that fewer than $3$ alarms are not enough.

 **Test case $3$:**  Alarms installed in rooms $2$, $3$, $5$ and $8$ protect all the dangerous rooms. It can be verified that fewer than $4$ alarms are not enough.

 **Test case $4$:**  Alarms installed in rooms $4$ and $7$ protect rooms $1$ to $4$ and rooms $4$ to $7$ respectively, which covers all the dangerous rooms.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-28T15:02:44.238Z  

```c_cpp
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        string s;
        cin >> s;
        int dan = 0;
        for(char i : s) if(i == '1') dan+=1;
        
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/ALARMM)