class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int trgt) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>>ans;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i - 1] == nums[i]) continue;
            for(int j = i + 1; j < n; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int l = j + 1;
                int r = n - 1;
                long long sum;
                while(l < r)
                {
                    sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[l] + (long long)nums[r];
                    if(sum > trgt) r--;
                    else if(sum < trgt) l++;
                    else
                    {
                        ans.push_back({nums[i],nums[j],nums[l],nums[r]});
                        l++;
                        r--;
                        while(l < r && nums[l - 1] == nums[l]) l++;
                        while(l < r && nums[r + 1] == nums[r]) r--;
                    }
                }
            }
        }
        return ans;
    }
};