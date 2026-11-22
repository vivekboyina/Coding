/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        // set<vector<int>>st;
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int j,k;
        int sum;
        for(int i = 0; i < n; i++)
        {
            if(i > 0 && nums[i] == nums[i - 1]) i++;
            j = i + 1;
            k = n - 1;
            while(i < n && j < k)
            {
                vector<int>row;
                if(j == i)
                {
                    j++;
                    continue;
                }
                else if(k == i)
                {
                    k--;
                    continue;
                }
                else if(j < n && j == k)
                {
                    j++;
                    continue;
                }
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    cout << i << " " << j << " " << k << endl;
                    row.push_back(nums[i]);
                    row.push_back(nums[j]);
                    row.push_back(nums[k]);
                    sort(row.begin(),row.end());
                    ans.push_back(row);
                    // st.insert(row);
                    j++;
                    k--;
                    while(j < k && nums[j] == nums[j - 1]) j++;
                    while(j < k && nums[k] == nums[k + 1]) k--;
                }
                else if(sum > 0) k--;
                else if(sum < 0) j++;
            }
        }
        // vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
// @lc code=end

