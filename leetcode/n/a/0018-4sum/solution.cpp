/*
 * @lc app=leetcode id=18 lang=cpp
 *
 * [18] 4Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) continue;
            for(int j = i + 1; j < n; j++)
            {
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                int k = j + 1;
                int l = n - 1;
                while(k < l)
                {
                    long long sum = (long long)nums[i] + (long long)nums[j] + (long long)nums[k] + (long long)nums[l];
                    if(sum == (long long)target)
                    {
                        ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                        l--;
                        k++;
                        while(k < l && nums[k] == nums[k - 1]) k++;
                        while(l > k && nums[l] == nums[l + 1]) l--;
                    }
                    else if(sum > (long long)target) l--;
                    else if(sum < (long long)target) k++;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

