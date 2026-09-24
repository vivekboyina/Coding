class Solution {
public:
    int digit(int n)
    {
        int a = 0;
        while(n)
        {
            int k = n % 10;
            a+=k;
            n/=10;
        }
        return a;
    }
    int smallestIndex(vector<int>& nums) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size(); i++)
        {
            if(digit(nums[i]) == i) ans = min(ans,i);
        }
        if(ans == INT_MAX) return -1;
        return ans;
    }
};