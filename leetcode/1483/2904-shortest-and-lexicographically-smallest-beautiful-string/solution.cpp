class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = s;
        int cnt = 0;
        int l = 0;
        int n = s.length();
        for(int r = 0; r < n; r++)
        {
            if(s[r] == '1') cnt+=1;
            while(cnt > k)
            {
                if(s[l] == '1') cnt-=1;
                l++;
            }
            if(cnt == k) ans = min(ans,s.substr(l,r - l + 1));
        }
        if(ans == s) return "";
        string ss = ans;
        for(char i : ss)
        {
            if(i == '1') break;
            ans.erase(ans.begin());
        }
        ss = ans;
        for(int i = ss.length() - 1; i >= 0; i--)
        {
            if(ss[i] == '1') break;
            ans.pop_back();
        }
        return ans;
    }
};