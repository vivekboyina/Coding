class Solution {
  public:
    void rec(int i,int j,int n,vector<vector<int>> &maze,vector<string>&ans,string rt)
    {
        if(i == n - 1 && j == n - 1)
        {
            ans.push_back(rt);
            return;
        }
        if(i < n - 1 && maze[i + 1][j] == 1)
        {
            rt.push_back('D');
            maze[i][j] = -1;
            rec(i + 1,j,n,maze,ans,rt);
            maze[i][j] = 1;
            rt.pop_back();
        }
        if(j < n - 1 && maze[i][j + 1] == 1)
        {
            rt.push_back('R');
            maze[i][j] = -1;
            rec(i,j + 1,n,maze,ans,rt);
            maze[i][j] = 1;
            rt.pop_back();
        }
        if(j > 0 && maze[i][j - 1] == 1)
        {
            rt.push_back('L');
            maze[i][j] = -1;
            rec(i,j - 1,n,maze,ans,rt);
            maze[i][j] = 1;
            rt.pop_back();
        }
        if(i > 0 && maze[i - 1][j] == 1)
        {
            rt.push_back('U');
            maze[i][j] = -1;
            rec(i - 1,j,n,maze,ans,rt);
            maze[i][j] = 1;
            rt.pop_back();
        }
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        vector<string>ans;
        string rt;
        int n = maze.size();
        if(maze[0][0] == 1) rec(0,0,n,maze,ans,rt);
        sort(ans.begin(),ans.end());
        return ans;
    }
};