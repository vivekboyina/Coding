class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        for(int i : nums)
        {
            i = abs(i);
            if(i >= 1 && i <= n)
            {
                if(nums[i - 1] > 0) nums[i - 1] = -1*nums[i - 1];
            }
        }
        vector<int>ans;
        for(int i = 0; i < n; i++) if(nums[i] > 0) ans.push_back(i + 1);
        return ans;
    }
};