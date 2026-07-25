class Solution {
public:
    int maxProduct(int n) {
        vector<int>pro;
        while(n)
            {
                int k = n % 10;
                pro.push_back(k);
                n/=10;
            }
        int m = pro.size();
        sort(pro.begin(),pro.end());
        return pro[m - 1]*pro[m - 2];
    }
};