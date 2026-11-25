class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            bool lft = m > 0 ? nums[m] > nums[m - 1] ? true : false : true;
            bool rht = m < n - 1 ? nums[m] > nums[m + 1] ? true : false : true;
            if(lft && rht) return m;
            else if(lft && !rht) l = m + 1;
            else h = m - 1;
        }
        return -1;
    }
};