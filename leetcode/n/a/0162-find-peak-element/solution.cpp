class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return 0;
        if(nums[1] < nums[0]) return 0;
        if(nums[n - 2] < nums[n - 1]) return n - 1;
        int low = 1;
        int high = n - 2;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) return mid;
            else if(nums[mid - 1] > nums[mid]) high = mid - 1;
            else low = mid + 1;
        }
        return -1;
    }
};