class Solution {
public:
    vector<int> partitionLabels(string s) {
        vector<int>ans;
        unordered_map<char,int>mp;
        int n = s.length();
        for(int i = 0; i < n; i++) mp[s[i]] = i;
        int mx = -1;
        for(int i = 0; i < n; i++)
        {
            mx = max(mp[s[i]],mx);
            if(i == mx) ans.push_back(mx + 1);
        }
        for(int i = ans.size() - 1; i > 0; i--) ans[i] = ans[i] - ans[i - 1];
        return ans;
    }
};