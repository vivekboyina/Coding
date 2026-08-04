class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int mx = INT_MIN;
        for(int i : nums) mx = max(i,mx);
        int cnt = 0;
        int ans = 1;
        for(int i : nums)
        {
            if(i == mx) cnt++;
            else cnt = 0;
            ans = max(cnt,ans);
        }
        return ans;
    }
};