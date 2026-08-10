class Solution {
public:
    void rec(int i,int s,int t,vector<int>& nums,vector<vector<int>>& ans,vector<int>& row)
    {
        if(s == t)
        {
            ans.push_back(row);
            return;
        }
        for(int j = i; j < nums.size(); j++)
        {
            if(j > i && nums[j] == nums[j - 1]) continue;
            if(s > t) break;
            row.push_back(nums[j]);
            rec(j + 1,s + nums[j],t,nums,ans,row);
            row.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& cnd, int t) {
        sort(cnd.begin(),cnd.end());
        vector<vector<int>>ans;
        vector<int>row;
        rec(0,0,t,cnd,ans,row);
        return ans;
    }
};