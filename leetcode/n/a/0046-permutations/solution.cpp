class Solution {
public:
    void bkt(vector<int>& nums,vector<bool>& usd,vector<int>& tmp,vector<vector<int>>& ans)
    {
        if(tmp.size() == nums.size())
        {
            ans.push_back(tmp);
            return;
        }
        for(int i = 0; i < nums.size(); i++)
        {
            if(usd[i]) continue;
            usd[i] = true;
            tmp.push_back(nums[i]);
            bkt(nums,usd,tmp,ans);
            usd[i] = false;
            tmp.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        int n = nums.size();
        vector<bool>usd(n,false);
        vector<int>tmp;
        bkt(nums,usd,tmp,ans);
        return ans;
    }
};