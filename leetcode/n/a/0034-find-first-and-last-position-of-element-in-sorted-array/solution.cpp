class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0;
        int high = n - 1;
        int mid;
        while(low <= high)
        {
            cout << low << " " << high << endl;
            mid = low + (high - low)/2;
            if(nums[mid] == target)
            {
                if(nums[low] == target && nums[high] == target) return {low,high};
                else if(nums[low] == target) high = mid;
                else low = mid + 1;
            }
            else if(nums[mid] > target) high = mid - 1;
            else low = mid + 1;
        }
        return {-1,-1};
    }
};