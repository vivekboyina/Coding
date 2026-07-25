class Solution {
public:
    int mySqrt(int x) {
        int l = 1;
        int h = x;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(m == x/m) return m;
            else if(m > x/m) h = m - 1;
            else if(m < x/m) l = m + 1;
        }
        return l - 1;
    }
};