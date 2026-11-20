/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        set<vector<int>>st;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int j,k;
        int sum;
        for(int i = 0; i < n; i++)
        {
            vector<int>row;
            j = 0;
            k = n - 1;
            while(j < k)
            {
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
                cout << nums[i] << " " << nums[j] << " " << nums[k] << endl;
                sum = nums[i] + nums[j] + nums[k];
                if(sum == 0)
                {
                    row.push_back(nums[i]);
                    row.push_back(nums[j]);
                    row.push_back(nums[k]);
                    sort(row.begin(),row.end());
                    st.insert(row);
                    break;
                }
                else if(sum > 0) k--;
                else if(sum < 0) j++;
            }
        }
        vector<vector<int>>ans(st.begin(),st.end());
        return ans;
    }
};
// @lc code=end

