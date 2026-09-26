class Solution {
public:
    bool judgeSquareSum(int c) {
        int i = 0;
        int j = sqrt(c);
        long long mul;
        while(i <= j)
        {
            mul = i*i*1LL + j*j*1LL;
            if(mul > c) j--;
            else if(mul < c) i++;
            else return true;
        }
        return false;
    }
};