class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int mn = m + n;
        for(int i = m - 1; i >= 0; i--) n1[i + n] = n1[i];
        for(int i = 0; i < n; i++) n1[i] = 0;
        int i = n;
        int j = 0;
        int k = 0;
        while(i < mn && j < n)
        {
            if(n1[i] < n2[j]) n1[k++] = n1[i++];
            else n1[k++] = n2[j++];
        }
        while(i < mn) n1[k++] = n1[i++];
        while(j < n) n1[k++] = n2[j++];
    }
};