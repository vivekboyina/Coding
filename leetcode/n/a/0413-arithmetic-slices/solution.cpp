class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int n = nums.size();
        vector<int>diff(n,0);
        for(int i = 1; i < n; i++) diff[i] = nums[i] - nums[i - 1];
        int ans = 0;
        int cnt = 1;
        int k;
        for(int i = 1; i < n; i++)
        {
            while(i < n && diff[i - 1] == diff[i])
            {
                cnt++;
                i++;
            }
            cout << cnt << endl;
            k = cnt - 1;
            k = (k * (k + 1))/2;
            ans+=k;
            cnt = 1;
        }
        return ans;
    }
};