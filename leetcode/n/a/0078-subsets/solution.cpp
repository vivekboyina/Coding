class Solution {
public:
    void rec(vector<int>& nums,vector<int>& ds,vector<vector<int>>& ans,int i)
    {
        if(i == nums.size())
        {
            ans.push_back(ds);
            return;
        }
        ds.push_back(nums[i]);
        rec(nums,ds,ans,i + 1);
        ds.pop_back();
        rec(nums,ds,ans,i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>>ans;
        vector<int>ds;
        rec(nums,ds,ans,0);
        return ans;
    }
};