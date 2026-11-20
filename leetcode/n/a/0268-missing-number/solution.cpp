class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int ans = -1;
        for(int i = 0; i <= nums.size(); i++)
        {
            if(find(nums.begin(),nums.end(),i) == nums.end())
            {
                ans = i;
                break;
            }
        }
        return ans;
    }
};