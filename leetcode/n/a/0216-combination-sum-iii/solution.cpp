class Solution {
public:
    void rec(vector<int>&ds,vector<vector<int>>&ans,int &sum,int i,int &n,int &k)
    {
        if(i > 10) return;
        if(ds.size() == k)
        {
            if(sum == n) ans.push_back(ds);
            return;
        }
        if(sum > n) return;
        sum+=i;
        ds.push_back(i);
        rec(ds,ans,sum,i + 1,n,k);
        ds.pop_back();
        sum-=i;
        rec(ds,ans,sum,i + 1,n,k);
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int sum = 0;
        vector<vector<int>>ans;
        vector<int>ds;
        rec(ds,ans,sum,1,n,k);
        return ans;
    }
};