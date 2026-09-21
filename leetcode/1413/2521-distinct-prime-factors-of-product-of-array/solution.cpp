class Solution {
public:
    vector<int> spf;
    vector<int> prs;
    bool built = false;
    void primes() {
        if (built) return;
        built = true;
        spf.resize(1001);
        for (int i = 0; i <= 1000; ++i) spf[i] = i;
        for (int i = 2; i * i <= 1000; ++i) {
            if (spf[i] == i) {
                for (int j = i * i; j <= 1000; j += i) {
                    if (spf[j] == j) spf[j] = i;
                }
            }
        }
        for (int i = 2; i <= 1000; ++i) {
            if (spf[i] == i) prs.push_back(i);
        }
    }
    int distinctPrimeFactors(vector<int>& nums) {
        primes();
        int ans = 0;
        for (int p : prs) {
            for (int x : nums) {
                if (x % p == 0) {
                    ans+=1;
                    break;
                }
            }
        }
        return ans;
    }
};