class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            if(nums[mid] == target)
            {
                while(mid < n && nums[mid] == target) mid++;
                high = mid - 1;
                mid-=1;
                while(mid >= 0 && nums[mid] == target) mid--;
                low = mid + 1;
                return {low,high};
            }
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return {-1,-1};
    }
};