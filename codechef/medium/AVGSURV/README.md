# AVGSURV

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

### Average Survival

You have an array $A$ consisting of $N$ elements.

You can do the following operation as many times as you want:

- Choose an index $i$ such that $A_i$ is strictly smaller than the average of the entire array (without rounding).
- Delete the index $i$ from the array, concatenating the parts.

Note that the average is also changing over time.

Find the minimum possible length of the final array after performing operations.

### Input Format
- The first line of input will contain a single integer $T$, denoting the number of test cases.
- Each test case consists of multiple lines of input. The first line contains a single integer $N$. The second line contains $N$ integers - $A_1, A_2, \ldots, A_N$.
### Output Format

For each test case, output on a new line the minimum final length of the array.

### Constraints
- $1 \le T \le 100$
- $2 \le N \le 100$
- $1 \le A_i \le 100$
### Sample 1:
Input
Output

```
2
3
1 2 3
3
5 5 5

```

```
1
3

```

### Explanation:

 **Test Case 1:**  Initially, the average is $2$, and we can delete the element $1$. Now, the array is $[2, 3]$ and the average is $2.5$, we can delete the element $2$. Finally, we are left with $[3]$.

 **Test Case 2:**  The average is $5$, and we cannot delete any elements.

## Solution

**Language:** c_cpp  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-07-22T14:57:10.725Z  

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
        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];
        int k = n;
        int s = 0;
        float av = 0;
        while(k > 0)
        {
            av = 0;
            s = 0;
            for(int i : arr)
            {
                if(i != -1)
                {
                    av+=i;
                    s+=1;
                }
            }
            av = av/(float)s;
            sort(arr,arr + n);
            for(int i = n - 1; i >= 0; i--) 
            {
                if(float(arr[i]) < av && arr[i] != -1) 
                {
                    arr[i] = -1;
                    break;
                }
            }
            k-=1;
        }
        int ans = 0;
        for(int i : arr) if(i != -1) ans+=1;
        cout << ans << endl;
    }
}
```

---

[View on CodeChef](https://www.codechef.com/problems/AVGSURV)