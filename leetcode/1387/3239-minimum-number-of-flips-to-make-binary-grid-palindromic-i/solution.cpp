class Solution {
public:
    int minFlips(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        int ans = INT_MAX;
        int l;
        int r;
        for(int i = 0; i < n; i++)
        {
            l = 0;
            r = m - 1;
            while(l < r)
            {
                if(grid[i][l] != grid[i][r]) cnt+=1;
                l++;
                r--;
            }
        }
        ans = min(ans,cnt);
        cnt = 0;
        for(int i = 0; i < m; i++)
        {
            l = 0;
            r = n - 1;
            while(l < r)
            {
                if(grid[l][i] != grid[r][i]) cnt+=1;
                l++;
                r--;
            }
        }
        ans = min(ans,cnt);
        return ans;
    }
};