class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int>ans(n,-1);
        int k = 0;
        int i,j;
        while(k < n)
        {
            i = 0;
            j = k;
            if((k == 0 && grid[i][j] == -1) || (k == n - 1 && grid[i][j] == 1))
            {
                k+=1;
                continue;
            }
            while(i < m && j < n)
            {
                if(j < n - 1 && grid[i][j] == 1 && grid[i][j + 1] == 1) j+=1;
                else if(j > 0 && grid[i][j] == -1 && grid[i][j - 1] == -1) j-=1;
                else break;
                i+=1;
                if(i == m) ans[k] = j;
            }
            k+=1;
        }
        return ans;
    }
};