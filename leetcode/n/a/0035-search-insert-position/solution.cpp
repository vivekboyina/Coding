class Solution {
public:
    int searchInsert(vector<int>& nums, int t) {
        int l = 0;
        int r = nums.size() - 1;
        int m;
        while(l <= r)
        {
            m = l + (r - l)/2;
            if(nums[m] == t) return m;
            else if(nums[m] > t) r = m - 1;
            else l = m + 1;
        }
        return l;
    }
};