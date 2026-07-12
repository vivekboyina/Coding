class Solution {
public:
    int numRescueBoats(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int i = 0;
        int j = nums.size() - 1;
        int sum;
        while(i <= j)
        {
            if(i == j)
            {
                ans+=1;
                break;
            }
            sum = nums[i] + nums[j];
            if(sum > k) j--;
            else
            {
                i++;
                j--;
            }
            ans+=1;
            
        }
        return ans;
    }
};