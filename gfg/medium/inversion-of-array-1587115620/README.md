# Count Inversions

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers  **arr[]**. You have to find the Inversion Count of the array. Inversion count is the number of pairs of elements (i, j) such that i < j and arr[i] > arr[j].

 **Examples:** 

```
Input: arr[] = [2, 4, 1, 3, 5]
Output: 3
Explanation: The sequence 2, 4, 1, 3, 5 has three inversions (2, 1), (4, 1), (4, 3).
```

```
Input: arr[] = [2, 3, 4, 5, 6]
Output: 0
Explanation: As the sequence is already sorted so there is no inversion count.
```

```
Input: arr[] = [10, 10, 10]
Output: 0
Explanation: As all the elements of array are same, so there is no inversion count.
```

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-11-22T08:27:41.409Z  

```cpp
class Solution {
  public:
    void merge(vector<int>& arr,int low,int mid,int high)
    {
        int n1 = mid - low + 1;
        int n2 = high - mid;
        vector<int>a(n1),b(n2);
        for(int i = 0; i < n1; i++) a[i] = arr[low + i];
        for(int i = 0; i < n2; i++) b[i] = arr[mid + 1 + i];
        int i = 0,j = 0,k = low;
        while(i < n1 && j < n2)
        {
            if(a[i] < b[j]) arr[k++] = a[i++];
            else arr[k++] = b[j++];
        }
        while(i < n1) arr[k++] = a[i++];
        while(j < n2) arr[k++] = b[j++];
    }
    int countpairs(vector<int>& arr,int low,int mid,int high)
    {
        int cnt = 0;
        int right = mid + 1;
        for(int i = low; i <= mid; i++)
        {
            while(right <= high && arr[i] > arr[right]) right++;
            cnt += (right - (mid + 1));
        }
        return cnt;
    }
    int mergesort(vector<int>& arr,int low,int high)
    {
        int cnt = 0;
        if(low >= high) return 0;
        int mid = (low + high)/2;
        cnt += mergesort(arr,low,mid);
        cnt += mergesort(arr,mid + 1,high);
        cnt += countpairs(arr,low,mid,high);
        merge(arr,low,mid,high);
        return cnt;
    }
    int inversionCount(vector<int> &arr) {
        // code here
        return mergesort(arr,0,arr.size() - 1);
    }
};
```

---

[View on GeeksforGeeks](https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1)