class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l,r;
        int n = nums.size();
        int sum = 0;
        vector<vector<int>>ans;
        for(int i = 0; i < n - 2; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            l = i + 1;
            r = n - 1;
            while(l < r)
            {
                sum = nums[i] + nums[l] + nums[r];
                if(sum > 0) r--;
                else if(sum == 0)
                {
                    ans.push_back({nums[i],nums[l],nums[r]});
                    break;
                }
                else l++;
            }
        }
        return ans;
    }
};