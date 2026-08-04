class Solution {
  public:
    bool checkEdge(vector<vector<int>>& adj, int u, int v) {
        // code here
        for(int i = 0; i < adj[u].size(); i++)
        {
            if(adj[u][i] == v) return true;
        }
        return false;
    }
};