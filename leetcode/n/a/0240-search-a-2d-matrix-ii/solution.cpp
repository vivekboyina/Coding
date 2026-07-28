class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mtrx, int tgt) {
        int m = mtrx.size();
        int n = mtrx[0].size();
        int low;
        int high;
        int mid;
        for(int i = 0; i < m; i++)
        {
            if(mtrx[i][0] > tgt) return false;
            if(mtrx[i][n - 1] < tgt) continue;
            if(mtrx[i][n - 1] >= tgt && mtrx[i][0] <= tgt)
            {
                low = 0;
                high = n - 1;
                while(low <= high)
                {
                    mid = low + (high - low)/2;
                    if(mtrx[i][mid] == tgt) return true;
                    else if(mtrx[i][mid] > tgt) high = mid - 1;
                    else low = mid + 1;
                }
            }
        }
        return false;
    }
};