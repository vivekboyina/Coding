class Solution {
public:
    void mer(vector<int>& vc,int l,int m,int h)
    {
        int n1 = m - l + 1,n2 = h - m;
        vector<int>a(n1),b(n2);
        for(int i = 0; i < n1; i++) a[i] = vc[l + i];
        for(int i = 0; i < n2; i++) b[i] = vc[m + 1 + i];
        int i = 0,j = 0,k = l;
        while(i < n1 && j < n2)
        {
            if(a[i] < b[j]) vc[k++] = a[i++];
            else vc[k++] = b[j++];
        }
        while(i < n1) vc[k++] = a[i++];
        while(j < n2) vc[k++] = b[j++];
    }
    void mergesort(vector<int>& vc,int l,int h)
    {
        if(l >= h) return;
        int m = (l + h)/2;
        mergesort(vc,l,m);
        mergesort(vc,m + 1,h);
        mer(vc,l,m,h);
    }
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        for(int i = m; i < m + n; i++) n1[i] = n2[i - m];
        mergesort(n1,0,m + n - 1);
    }
};