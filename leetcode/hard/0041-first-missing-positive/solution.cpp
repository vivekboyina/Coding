class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) if(nums[i] < 0) nums[i] = 0;
        for(int i : nums)
        {
            i = abs(i);
            if(i >= 1 && i <= n)
            {
                if(nums[i - 1] == 0) nums[i - 1] = -1*(n + 1);
                else if(nums[i - 1] > 0) nums[i - 1] = -1*nums[i - 1];
            }
        }
        for(int i = 0; i < n; i++) if(nums[i] >= 0) return i + 1;
        return n + 1;
    }
};