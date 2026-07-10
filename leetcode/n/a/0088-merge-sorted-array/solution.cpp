class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int i = m - 1;
        int j = n - 1;
        int k = m + n - 1;
        while(i >= 0 && j >= 0)
        {
            if(n1[i] > n2[j]) n1[k--] = n1[i--];
            else n1[k--] = n2[j--];
        }
        while(j >= 0) n1[k--] = n2[j--];
    }
};