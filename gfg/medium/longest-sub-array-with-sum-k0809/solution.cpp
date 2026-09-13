class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int sum = 0;
        int ans = 0;
        int n = arr.size();
        for(int i = 0; i < n; i++)
        {
            sum+=arr[i];
            if(sum == k) ans = i + 1;
            if(mp.find(sum - k) != mp.end()) ans = max(ans,i - mp[sum - k]);
            if(mp.find(sum) == mp.end()) mp[sum] = i;
        }
        return ans;
    }
};