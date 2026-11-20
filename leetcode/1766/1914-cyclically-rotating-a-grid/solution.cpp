class Solution {
public:
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size(),m = grid[0].size();
        int l = 0,r = m - 1,t = 0,b = n - 1,c;
        int tmp;
        while(l < r && t < b)
        {
            int ln = b - t,br = r - l;
            int p = 2*(ln + br);
            c = k % p;
            while(c--)
            {
                tmp = grid[t][l];
                for(int i = l; i < r; i++) grid[t][i] = grid[t][i + 1];
                for(int i = t; i < b; i++) grid[i][r] = grid[i + 1][r];
                for(int i = r; i > l; i--) grid[b][i] = grid[b][i - 1];
                for(int i = b; i > t; i--) grid[i][l] = grid[i - 1][l];
                grid[t + 1][l] = tmp;
            }
            t++;
            l++;
            b--;
            r--;
        }
        return grid;
    }
};