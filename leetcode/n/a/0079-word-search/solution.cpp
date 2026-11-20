class Solution {
public:
    map<pair<int,int>,int>mp;
    bool ans = false;
    void rec(int i,int j,int in,vector<vector<char>>& brd,string s)
    {
        if(in == s.length() - 1 && brd[i][j] == s[in])
        {
            ans = true;
            return;
        }
        if(brd[i][j] == s[in])
        {
            if(i - 1 >= 0 && mp.count({i - 1,j}) == 0 && brd[i - 1][j] == s[in + 1])
            {
                mp[{i - 1,j}]++;
                rec(i - 1,j,in + 1,brd,s);
            }
            if(j - 1 >= 0 && mp.count({i,j - 1}) == 0 && brd[i][j - 1] == s[in + 1])
            {
                mp[{i,j - 1}]++;
                rec(i,j - 1,in + 1,brd,s);
            }
            if(j + 1 < brd[0].size() && mp.count({i,j + 1}) == 0 && brd[i][j + 1] == s[in + 1])
            {
                mp[{i,j + 1}]++;
                rec(i,j + 1,in + 1,brd,s);
            }
            if(i + 1 < brd.size() && mp.count({i + 1,j}) == 0 && brd[i + 1][j] == s[in + 1])
            {
                mp[{i + 1,j}]++;
                rec(i + 1,j,in + 1,brd,s);
            }
        }
        if(j + 1 < brd[0].size()) rec(i,j + 1,in,brd,s);
        else if(i + 1 < brd.size()) rec(i + 1,0,in,brd,s);
    }
    bool exist(vector<vector<char>>& board, string word) {
        rec(0,0,0,board,word);
        return ans;
    }
};