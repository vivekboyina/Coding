class Solution {
public:
    void setZeroes(vector<vector<int>>& mtrx) {
        int n = mtrx.size();
        int m = mtrx[0].size();
        int c0 = 1;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(mtrx[i][j] == 0)
                {
                    if(j == 0) c0 = 0;
                    else mtrx[0][j] = 0;
                    mtrx[i][0] = 0;
                }
            }
        }
        for(int i = 1; i < n; i++)
        {
            for(int j = 1; j < m; j++)
            {
                if(mtrx[i][j] != 0)
                {
                    if(mtrx[i][0] == 0 || mtrx[0][j] == 0)
                    {
                      mtrx[i][j] = 0;  
                    }
                }
            }
        }
        if(mtrx[0][0] == 0) for(int i = 0; i < m; i++) mtrx[0][i] = 0;
        if(c0 == 0) for(int i = 0; i < n; i++) mtrx[i][0] = 0;
    }
};