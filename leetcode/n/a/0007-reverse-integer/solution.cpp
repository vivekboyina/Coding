class Solution {
public:
    int reverse(int x) {
        if(x >= INT_MAX || x <= INT_MIN) return 0;
        long long reverse = 0;
        while(x)
        {
            int k = x % 10;
            reverse = reverse*10 + k;
            if(reverse >= INT_MAX || reverse <= INT_MIN) return 0;
            x/=10;
        }
        return reverse;
    }
};