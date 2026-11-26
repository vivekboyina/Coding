class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n - 1;
        int m;
        while(l < h)
        {
            m = l + (h - l)/2;
            cout << nums[m] << endl;
            if(nums[m] == target) return true;
            else if(nums[m] > target)
            {
                if(l > target) l = m;
                else h = m;
            }
            else
            {
                if(l > target) l = m;
                else h = m;
            }
        }
        return false;
    }
};