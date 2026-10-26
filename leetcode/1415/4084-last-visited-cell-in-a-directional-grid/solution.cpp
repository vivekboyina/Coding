class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>mt(n,vector<int>(m,0));
        mt[0][0] = 1;
        int i = 0,j = 0;
        while(i >= 0 && i < n && j >= 0 && j < m)
        {
            if(grid[i][j] == 'L')
            {
                if(j - 1 < 0 || mt[i][j - 1] == 1) return {i,j};
                j-=1;
            }
            else if(grid[i][j] == 'R')
            {
                if(j + 1 >= m || mt[i][j + 1] == 1) return {i,j};
                j+=1;
            }
            else if(grid[i][j] == 'U')
            {
                if(i - 1 < 0 || mt[i - 1][j] == 1) return {i,j};
                i-=1;
            }
            else if(grid[i][j] == 'D')
            {
                if(i + 1 >= n || mt[i + 1][j] == 1) return {i,j};
                i+=1;
            }
            mt[i][j] = 1;
        }
        return {i,j};
    }
};