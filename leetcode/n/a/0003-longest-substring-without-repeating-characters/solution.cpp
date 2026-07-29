class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int ans = 0;
        int l = -1;
        unordered_map<char,int>mp;
        for(int r = 0; r < n; r++)
        {
            if(mp.find(s[r]) != mp.end()) l = max(mp[s[r]],l);
            ans = max(ans,r - l);
            mp[s[r]] = r;
        }
        return ans;
    }
};