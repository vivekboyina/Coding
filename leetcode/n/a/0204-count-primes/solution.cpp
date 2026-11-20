vector<bool>prms(5000001,true);
class Solution {
public:
    void sieve()
    {
        for(int i = 2; i*i <= 5000000; i++)
        {
            if(prms[i] == true) for(int j = i*i; j <= 5000000; j+=i) prms[j] = false;
        }
    }
    int countPrimes(int n) {
        if(n < 2) return 0;
        static bool flag = true;
        if(flag)
        {
            flag = false;
            sieve();
        }
        long long ans = 0;
        for(int i = 2; i <  n; i++) if(prms[i]) ans+=1;
        return ans;
    }
};