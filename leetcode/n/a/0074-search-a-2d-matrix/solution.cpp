class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mtrx, int tgt) {
        int n = mtrx.size();
        int m = mtrx[0].size();
        int low;
        int high;
        int mid;
        for(int i = 0; i < n; i++)
        {
            if(mtrx[i][0] > tgt || mtrx[i][m - 1] < tgt) continue;
            low = 0;
            high = m - 1;
            while(low <= high)
            {
                mid = low + (high - low)/2;
                if(mtrx[i][mid] == tgt) return true;
                else if(mtrx[i][mid] > tgt) high = mid - 1;
                else low = mid + 1;
            }
        }
        return false;
    }
};
