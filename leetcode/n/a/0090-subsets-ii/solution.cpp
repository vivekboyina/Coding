class Solution {
public:
    void rec(int i,vector<int>nums,vector<vector<int>>& ans,vector<int>row)
    {
        if(i >= nums.size())
        {
            ans.push_back(row);
            return;
        }
        row.push_back(nums[i]);
        rec(i + 1,nums,ans,row);
        row.pop_back();
        while(i + 1 < nums.size() && nums[i] == nums[i + 1]) i++;
        rec(i + 1,nums,ans,row);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>row;
        sort(nums.begin(),nums.end());
        rec(0,nums,ans,row);
        return ans;
    }
};