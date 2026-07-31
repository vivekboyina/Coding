class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<char,int>mp;
        for(char c : word) mp[c]++;
        int ans = 0;
        int a = 1;
        int cnt = 0;
        for(auto it : mp)
        {
            ans+=(a*it.second);
            cnt++;
            if(cnt == 8)
            {
                cnt = 0;
                a+=1;
            }
        }
        return ans;
    }
};