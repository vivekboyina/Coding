class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j = 0;
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            if(nums[i] != nums[j]) nums[++j] = nums[i];
        }
        return j + 1;
    }
};