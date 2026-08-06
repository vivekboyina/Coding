class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        vector<int>diff(n,0);
        unordered_map<int,int>mp;
        for(int i = 1; i < n; i++)
        {
            diff[i] = nums[i] - nums[i - 1];
            mp[diff[i]]++;
        }
        if(mp.size() == 1)
        {
            n = n - 2;
            n = (n * (n + 1))/2;
            return n;
        }
        int ans = 0;
        int cnt = 0;
        int k;
        for(int i = 1; i < n; i++)
        {
            while(i < n && diff[i - 1] == diff[i])
            {
                cnt++;
                i++;
            }
            k = cnt - 1;
            k = (k * (k + 1))/2;
            ans+=k;
            cnt = 1;
        }
        return ans;
    }
};