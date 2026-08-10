class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        vector<int>ans;
        int l = 0,r = mat[0].size() - 1,t = 0,b = mat.size() - 1,i;
        while(l <= r && t <= b)
        {
            for(i = l; i <= r; i++) ans.push_back(mat[t][i]);
            t++;
            for(i = t; i <= b; i++) ans.push_back(mat[i][r]);
            r--;
            if(t <= b)
            {
                for(i = r; i >= l; i--) ans.push_back(mat[b][i]);
                b--;
            }
            if(l <= r)
            {
                for(i = b; i >= t; i--) ans.push_back(mat[i][l]);
                l++;
            }
        }
        return ans;
    }
};