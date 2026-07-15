class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e = 0,o = 0;
        for(int i = 0; i < n*2; i++)
            {
                if(i % 2 == 0) e+=i;
                else if(i % 2 == 1) o+=i;
            }
        return __gcd(o,e);
    }
};