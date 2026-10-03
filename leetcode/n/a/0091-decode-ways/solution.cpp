class Solution {
public:
    int numDecodings(string s) {
        if(s[0] == '0') return 0;
        int n = s.length();
        int ans = 1;
        for(int i = 1; i < n; i++)
        {
            if(((s[i - 1] - '0') > 2 || s[i - 1] == '0') && s[i] == '0') return 0;
            else if(s[i] == '0') ans = 0;
        }
        int k;
        for(int i = 0; i < n - 1; i++)
        {
            k = (s[i] - '0')*10 + (s[i + 1] - '0');
            if(k < 27 && (i + 1 == n - 1 || (i + 2 < n && s[i + 2] != '0')))
            {
                cout << i << endl;
                ans+=1;
            }
        }
        return ans;
    }
};