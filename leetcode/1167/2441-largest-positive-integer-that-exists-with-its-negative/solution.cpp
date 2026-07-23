class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int i = 0;
        int j = n - 1;
        int sum = 0;
        while(i < j)
        {
            sum = nums[i] + nums[j];
            if(sum == 0) return nums[j];
            else if(sum > 0) j--;
            else if(sum < 0) i++;
        }
        return -1;
    }
};