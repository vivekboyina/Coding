class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(i == 0) nums[j] = nums[i];
            else if(nums[i] != nums[j]) nums[++j] = nums[i];
        }
        return j + 1;
    }
};