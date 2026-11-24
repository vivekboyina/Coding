class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        // code here
        int ans = 0;
        int n = arr.size();
        vector<int>pf(n);
        pf[0] = arr[0];
        for(int i = 1; i < n; i++) pf[i] = pf[i - 1] + arr[i];
        unordered_map<int,int>mp;
        for(int i = 0; i < n; i++)
        {
            if(pf[i] == k) ans = max(ans,i + 1);
            else if(mp.find(pf[i] - k) != mp.end()) ans = max(ans,(i - mp[pf[i] - k]));
            if(mp.find(pf[i]) == mp.end()) mp[pf[i]] = i;
        }
        return ans;
    }
};