class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length();
        vector<int>pf(n,-1);
        vector<int>sf(n,-1);
        int one = -1;
        bool z = false;
        for(int i = n - 1; i >= 0; i--)
        {
            if(s[i] == '1') one = i;
            else z = true;
            sf[i] = one;
        }
        if(one == -1) return 0;
        if(!z) return n;
        one = -1;
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '1') one = i;
            pf[i] = one;
        }
        int st = -1;
        int nd = -1;
        int dis = INT_MIN;
        for(int i = 1; i < n - 1; i++)
        {
            if(s[i] == '1')
            {
                if(sf[i + 1] == -1 && pf[i - 1] == -1)
                {
                    st = 0;
                    nd = n;
                }
                else if(sf[i + 1] != -1 && pf[i - 1] == -1)
                {
                    if(sf[i + 1] > dis)
                    {
                        dis = sf[i + 1];
                        st = 0;
                        nd = sf[i + 1];
                    }
                }
                else if(sf[i + 1] == -1 && pf[i - 1] != -1)
                {
                    if(n - 1 - pf[i - 1] > dis)
                    {
                        dis = n - 1 - pf[i - 1];
                        st = pf[i - 1];
                        nd = n - 1;
                    }
                }
                else
                {
                    if(sf[i + 1] - pf[i - 1] > dis)
                    {
                        dis = sf[i + 1] - pf[i - 1];
                        st = pf[i - 1];
                        nd = sf[i + 1];
                    }
                }
            }
        }
        if(st != -1 && nd != -1) for(int i = st; i <= nd; i++) s[i] = '1';
        int ans = 0;
        for(char i : s) if(i == '1') ans+=1;
        cout << s;
        return ans;
    }
};