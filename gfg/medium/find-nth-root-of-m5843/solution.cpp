class Solution {
  public:
    int nthRoot(int n, int m) {
        // Code here
        long long l = 0;
        long long h = INT_MAX;
        long long mi;
        while(l <= h)
        {
            mi = l + (h - l)/2;
            if(pow(mi,n) == m) return mi;
            else if(pow(mi,n) > m) h = mi - 1;
            else l = mi + 1;
        }
        return -1;
    }
};