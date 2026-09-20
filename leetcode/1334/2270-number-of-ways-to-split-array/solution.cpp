class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        vector<long long>pf(n);
        long long sum = 0;
        for(int i = 0; i < n; i++)
        {
            sum+=nums[i];
            pf[i] = sum;
        }
        for(int i = 0; i < n - 1; i++)
        {
            if(pf[i] > pf[i + 1] - pf[i])
            {
                cout << i << endl;
                ans+=1;
            }
        }
        return ans;
    }
};