class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans;
        for(int i : nums)
        {
            i = abs(i);
            if(i >= 1 && i <= n)
            {
                if(nums[i - 1] > 0) nums[i - 1] = -1*nums[i - 1];
                else if(nums[i - 1] < 0) ans.push_back(i);
            }
        }
        return ans;
    }
};