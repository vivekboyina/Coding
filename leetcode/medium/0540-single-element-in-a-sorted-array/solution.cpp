class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int m;
        if(n == 1) return nums[0];
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(m > 0 && m < n - 1)
            {
                if((m % 2 == 0 && nums[m] == nums[m + 1]) || (m % 2 != 0 && nums[m] == nums[m - 1])) l = m + 1;
                else h = m - 1;
            }
            else if(m == 0)
            {
                if(nums[m] == nums[m + 1]) l = m + 1;
                else h = m - 1;
            }
            else if(m == n - 1)
            {
                if(nums[m] == nums[m - 1]) h = m - 1;
                else l = m + 1;
            }
        }
        return l < n ? nums[l] : nums[h];
    }
};