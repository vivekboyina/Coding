class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int trgt) {
        int i = 0;
        int j = nums.size() - 1;
        while(i < j)
        {
            if(nums[i] + nums[j] > trgt) j--;
            else if(nums[i] + nums[j] < trgt) i++;
            else if(nums[i] + nums[j] == trgt) return {i + 1,j + 1};
        }
        return {-1,-1};
    }
};
