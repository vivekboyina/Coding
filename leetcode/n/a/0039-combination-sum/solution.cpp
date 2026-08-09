class Solution {
public:
    void rec(int i,int s,vector<int>nums,int t,vector<vector<int>>& ans,vector<int>cur)
    {
        if(s > t) return;
        if(i == nums.size())
        {
            if(s == t) ans.push_back(cur);
            return;
        }
        cur.push_back(nums[i]);
        rec(i,s + nums[i],nums,t,ans,cur);
        cur.pop_back();
        rec(i + 1,s,nums,t,ans,cur);
    }
    vector<vector<int>> combinationSum(vector<int>& cnd, int t) {
        vector<vector<int>>ans;
        vector<int>cur;
        rec(0,0,cnd,t,ans,cur);
        return ans;
    }
};