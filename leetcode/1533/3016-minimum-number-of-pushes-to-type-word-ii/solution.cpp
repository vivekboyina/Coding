class Solution {
public:
    int minimumPushes(string word) {
        vector<int>fr(26,0);
        for(char c : word) fr[c - 'a']++;
        sort(fr.begin(),fr.end(),greater<int>());
        int ans = 0;
        int a = 1;
        for(int i = 0; i < 26; i++)
        {
            a = (i/8) + 1;
            ans+=(a*fr[i]);
        }
        return ans;
    }
};