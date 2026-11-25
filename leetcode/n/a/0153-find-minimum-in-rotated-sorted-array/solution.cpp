class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            // cout << l << " " << h << endl;
            if(nums[m] > nums[l] && nums[m] > nums[h])
            {
                if(nums[h] > nums[l]) h = m - 1;
                else l = m + 1;
            }
            else if(nums[m] < nums[h]) h = m;
            else l = m + 1;
        }
        return nums[h];
    }
};