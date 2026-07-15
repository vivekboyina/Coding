class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& bg) {
        int lst = 0;
        int m = bg.size();
        int n = bg[0].size();
        int k;
        for(int i = 0; i < m; i++)
        {
            lst = 0;
            for(int j = 0; j < n; j++)
            {
                if(bg[i][j] == '*')
                {
                    k = j - 1;
                    while(lst < k)
                    {
                        if(bg[i][k] == '.' && bg[i][lst] == '#')
                        {
                            swap(bg[i][k],bg[i][lst]);
                            k--;
                            lst++;
                        }
                        else if(bg[i][k] == '.' && bg[i][lst] == '.') lst++;
                        else if(bg[i][k] == '#' && bg[i][lst] == '#') k--;
                        else
                        {
                            lst++;
                            k--;
                        }
                    }
                    lst = j + 1;
                }
                else if(j == n - 1)
                {
                    k = j;
                    while(lst < k)
                    {
                        if(bg[i][k] == '.' && bg[i][lst] == '#')
                        {
                            swap(bg[i][k],bg[i][lst]);
                            k--;
                            lst++;    
                        }
                        else if(bg[i][k] == '.' && bg[i][lst] == '.') lst++;
                        else if(bg[i][k] == '#' && bg[i][lst] == '#') k--;
                        else
                        {
                            lst++;
                            k--;
                        }
                    }
                    lst = j;
                }
            }
        }
        vector<vector<char>>ans;
        for(int i = 0; i < n; i++)
        {
            vector<char>row;
            for(int j = m - 1; j >= 0; j--) row.push_back(bg[j][i]);
            ans.push_back(row);
        }
        return ans;
    }
};