class Solution {
public:
    static const long long MOD = 1e9 + 7;
    pair<long long, long long> fib(long long n) {
        if (n == 0) return {0, 1};
        auto [a, b] = fib(n / 2);
        long long c = a * ((2 * b % MOD - a + MOD) % MOD) % MOD;
        long long d = (a * a % MOD + b * b % MOD) % MOD;
        if (n % 2 == 0) return {c, d};
        return {d, (c + d) % MOD};
    }
    int countGoodStrings(long long n) {
        auto [f, next] = fib(n);
        return (2 * f) % MOD;
    }
};
