class Solution {
public:
    void sieve(int n,vector<bool>& prms)
    {
        for(int i = 2; i*i < n; i++)
        {
            if(prms[i] == true) for(int j = i*i; j < n; j+=i) prms[j] = false;
        }
    }
    int countPrimes(int n) {
        if(n < 2) return 0;
        vector<bool>prms(n,true);
        prms[0] = false;
        prms[1] = false;
        sieve(n,prms);
        int ans = 0;
        for(bool i : prms) if(i) ans++;
        return ans;
    }
};