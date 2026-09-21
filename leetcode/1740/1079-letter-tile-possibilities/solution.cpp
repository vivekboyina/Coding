class Solution {
public:
    unordered_set<string>st;
    void bkt(vector<bool>&usd,string &sm,string &tls,int &n)
    {
        if(sm.length() > 0) st.insert(sm);
        for(int i = 0; i < n; i++)
        {
            if(usd[i]) continue;
            usd[i] = true;
            sm.push_back(tls[i]);
            bkt(usd,sm,tls,n);
            sm.pop_back();
            usd[i] = false;
        }
        return;
    }
    int numTilePossibilities(string tls) {
        int n = tls.length();
        vector<bool>usd(n,false);
        string sm = "";
        bkt(usd,sm,tls,n);
        return st.size();
    }
};