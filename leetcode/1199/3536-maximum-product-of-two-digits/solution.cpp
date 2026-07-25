class Solution {
public:
    int maxProduct(int n) {
        int n1 = INT_MIN;
        int n2 = INT_MIN;
        int d;
        while(n)
        {
            d = n % 10;
            n/=10;
            if(d > n1)
            {
                n2 = n1;
                n1 = d;
            }
            else if(d <= n1 && d > n2) n2 = d;
        }
        return n1*n2;
    }
};