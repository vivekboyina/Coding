class Solution {
public:
    bitset<30>cl,dl,dr;
    void bkt(vector<vector<string>>&ans,vector<string>&chs,int r,int &n)
    {
        if(r >= n)
        {
            ans.push_back(chs);
            return;
        }
        for(int i = 0; i < n; i++)
        {
            if(!cl[i] && !dl[r + i] && !dr[r - i + n - 1])
            {
                chs[r][i] = 'Q';
                cl[i] = dl[r + i] = dr[r - i + n - 1] = 1;
                bkt(ans,chs,r + 1,n);
                chs[r][i] = '.';
                cl[i] = dl[r + i] = dr[r - i + n - 1] = 0;
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>chs;
        string s = "";
        for(int i = 0; i < n; i++) s+='.';
        for(int i = 0; i < n; i++) chs.push_back(s);
        bkt(ans,chs,0,n);
        return ans;
    }
};