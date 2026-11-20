class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = s;
        int cnt = 0;
        int l = 0;
        int n = s.length();
        int len = n;
        for(int r = 0; r < n; r++)
        {
            if(s[r] == '1') cnt+=1;
            while(cnt > k)
            {
                if(s[l] == '1') cnt-=1;
                l++;
            }
            while(s[l] == '0') l++;
            if(cnt == k)
            {
                if(r - l + 1 < len)
                {
                    ans = s.substr(l,r - l + 1);
                    len = r - l + 1;
                }
                else if(r - l + 1 == len) ans = min(ans,s.substr(l,r - l + 1));
            }
        }
        if(ans == s && cnt < k) return "";
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