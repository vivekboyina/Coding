vector<bool>prm(1000001,true);
class Solution {
public:
    void prime()
    {
        prm[0] = false;
        prm[1] = false;
        for(int i = 2; i*i <= 1000000; i++)
        {
            if(prm[i] == true) for(int j = i + i; j <= 1000000; j+=i) prm[j] = false;
        }
    }
    vector<int> closestPrimes(int st, int nd) {
        static bool flag = true;
        if(flag)
        {
            flag = false;
            prime();
        }
        int l = -1;
        int r = -1;
        int dis = INT_MAX;
        vector<int>ans(2,-1);
        for(int i = st; i <= nd; i++)
        {
            if(l == -1 && prm[i]) l = i;
            else if(r == -1 && prm[i]) r = i;
            else if(prm[i])
            {
                l = r;
                r = i;
            }
            if(l != -1 & r != -1 && abs(l - r) < dis)
            {
                dis = abs(l - r);
                ans[0] = l;
                ans[1] = r;
            }
        }
        return ans;
    }
};