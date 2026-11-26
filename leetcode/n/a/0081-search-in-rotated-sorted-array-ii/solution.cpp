class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(nums[m] == target) return true;
            else if(nums[m] == nums[l] && nums[m] == nums[h])
            {
                l+=1;
                h-=1;
            }
            else if(nums[m] < nums[l] && nums[l] <= target) h = m - 1;
            else if(nums[m] > nums[h] && nums[h] >= target) l = m + 1;
            else if(nums[m] > target) h = m - 1;
            else if(nums[m] < target) l = m + 1;
        }
        return false;
    }
};