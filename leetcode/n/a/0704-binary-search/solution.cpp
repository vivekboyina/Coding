class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0;
        int h = nums.size() - 1;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(nums[m] > target) h = m - 1;
            else if(nums[m] < target) l = m + 1;
            else return m;
            cout << l << " " << h << " " << m << endl;
        }
        return -1;
    }
};