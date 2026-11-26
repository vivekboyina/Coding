class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        for(int i = 0; i < n; i++)
        {
            if(matrix[i][m - 1] < target) continue;
            else if(matrix[i][0] > target) break;
            int l = 0;
            int r = m - 1;
            while(l <= r)
            {
                int h = l + (r - l)/2;
                if(matrix[i][h] == target) return true;
                else if(matrix[i][h] > target) r = h - 1;
                else l = h + 1;
            }
        }
        return false;
    }
};