class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(nums[mid] == target) return mid;
            else if(nums[low] <= target && nums[low] > nums[mid]) high = mid - 1;
            else if(nums[high] >= target && nums[high] < nums[mid]) low = mid + 1;
            else if(nums[mid] > target) high = mid - 1;
            else if(nums[mid] < target) low = mid + 1;
        }
        return -1;
    }
};