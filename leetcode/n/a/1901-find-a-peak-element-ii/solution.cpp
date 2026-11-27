class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        int l,r,h;
        bool lft,rht,upt,blt;
        for(int i = 0; i < n; i++)
        {
            l = 0;
            r = m - 1;
            while(l <= r)
            {
                h = l + (r - l)/2;
                lft = h > 0 ? mat[i][h] > mat[i][h - 1] ? true : false : true;
                rht =  h < m - 1 ? mat[i][h] > mat[i][h + 1] ? true : false : true;
                upt = i > 0 ? mat[i][h] > mat[i - 1][h] ? true : false : true;
                blt = i < n - 1 ? mat[i][h] > mat[i + 1][h] ? true : false : true;
                if(lft && rht && upt && blt) return {i,h};
                else if(!lft && rht) r = h - 1;
                else if(!lft && !rht)
                {
                    if(h > 0 && h < m - 1)
                    {
                        if(mat[i][h - 1] < mat[i][h + 1]) l = h + 1;
                        else r = h - 1;
                    }
                    else if(h > 0) r = h - 1;
                    else l = h + 1;
                }
                else l = h + 1;
                cout << l << " " << r << " " << h << " " << i << endl;
            }
        }
        return {-1,-1};
    }
};