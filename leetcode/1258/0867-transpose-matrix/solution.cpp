class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& mtrx) {
        vector<vector<int>>ans;
        for(int i = 0; i < mtrx[0].size(); i++)
        {
            vector<int>row;
            for(int j = 0; j < mtrx.size(); j++) row.push_back(mtrx[j][i]);
            ans.push_back(row);
        }
        return ans;
    }
};