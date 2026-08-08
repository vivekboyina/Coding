class Solution {
public:
    void rec(int i,vector<int>nums,set<vector<int>>& st,vector<int>row)
    {
        if(i >= nums.size())
        {
            st.insert(row);
            return;
        }
        row.push_back(nums[i]);
        rec(i + 1,nums,st,row);
        row.pop_back();
        rec(i + 1,nums,st,row);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        set<vector<int>>st;
        vector<int>row;
        rec(0,nums,st,row);
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};