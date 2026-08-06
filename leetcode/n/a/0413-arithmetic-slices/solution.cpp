class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int ans = 0;
        int cnt = 0;
        for(int i = 2; i < nums.size(); i++)
        {
            if(nums[i - 1] - nums[i] == nums[i - 2] - nums[i - 1]) cnt++;
            else cnt = 0;
            ans+=cnt;
        }
        return ans;
    }
};