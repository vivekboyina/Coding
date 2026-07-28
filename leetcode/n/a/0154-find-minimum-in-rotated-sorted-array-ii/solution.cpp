class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(nums[low] > nums[mid]) high = mid - 1;
            else low = mid + 1;
        }
        return nums[low];
    }
};