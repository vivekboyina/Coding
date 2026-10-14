class Solution {
public:
    bool threeFibonacciSum(int n) {
        long long a = 0;
        long long b = 1;
        long long c = 1;
        long long sum = 0;
        long long tmp;
        while(sum < n)
        {
            sum = a + b + c;
            if(sum == n) return true;
            else if(sum > n) return false;
            tmp = b + c;
            a = b;
            b = c;
            c = tmp;
        }
        return (sum == n);
    }
};