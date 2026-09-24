class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int rl = 1;
        int lr = 1;
        int n = nums.size();
        int ans = INT_MIN;
        for(int i = 0; i < n; i++)
        {
            if(lr == 0) lr = 1;
            if(rl == 0) rl = 1;
            lr*=nums[i];
            rl*=nums[n - i - 1];
            ans = max({ans,lr,rl});
        }
        return ans;
    }
};