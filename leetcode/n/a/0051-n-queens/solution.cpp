class Solution {
public:
    bool valid(int &i,int &j,vector<string>&ans,int &n)
    {
        int ti = i;
        int tj = j;
        while(ti >= 0)
        {
            if(ans[ti][tj] == 'Q') return false;
            ti--;
        }
        ti = i;
        while(ti >= 0 && tj >= 0)
        {
            if(ans[ti][tj] == 'Q') return false;
            ti--;
            tj--;
        }
        ti = i;
        tj = j;
        while(ti >= 0 && tj < n)
        {
            if(ans[ti][tj] == 'Q') return false;
            ti--;
            tj++;
        }
        return true;
    }
    void bkt(vector<vector<string>>&chs,vector<string>&ans,int r,int &n)
    {
        if(r >= n)
        {
            chs.push_back(ans);
            return;
        }
        for(int i = 0; i < n; i++)
        {
            if(valid(r,i,ans,n))
            {
                ans[r][i] = 'Q';
                bkt(chs,ans,r + 1,n);
                ans[r][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>chs;
        vector<string>ans;
        string s = "";
        for(int i = 0; i < n; i++) s+='.';
        for(int i = 0; i < n; i++) ans.push_back(s);
        bkt(chs,ans,0,n);
        return chs;
    }
};