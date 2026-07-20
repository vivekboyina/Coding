class Solution {
public:
    string simplifyPath(string path) {
        vector<string>st;
        string s;
        for(char i : path + "/")
        {
            if(i == '/')
            {
                if(s == ".."){ if(!st.empty()) st.pop_back();}
                else if(s != "." && !s.empty()) st.push_back(s);
                s.clear();
            }
            else s+=i;
        }
        string ans = "";
        for(int i = 0; i < st.size(); i++)
        {
            ans += "/" + st[i];
        }
        return ans.empty() ? "/" : ans;
    }
};