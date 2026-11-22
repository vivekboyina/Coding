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