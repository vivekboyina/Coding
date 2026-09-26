class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knwl) {
        unordered_map<string,string>mp;
        for(int i = 0; i < knwl.size(); i++) mp[knwl[i][0]] = knwl[i][1];
        string ans = "";
        int n = s.length();
        string tmp = "";
        for(int i = 0; i < n; i++)
        {
            if(s[i] == '(')
            {
                tmp = "";
                i++;
                while(s[i] != ')') tmp+=s[i++];
                if(mp.find(tmp) != mp.end()) ans+=mp[tmp];
                else ans+='?';
            }
            else ans+=s[i];
        }
        return ans;
    }
};