class Solution {
public:
    string convert(string s, int nr) {
        if(nr == 1) return s;
        string ans = "";
        const int n = nr*2 - 2;
        int k = nr*2 - 2;
        int p = 0;
        for(int i = 0; i < nr; i++)
        {
            if(i > 0 && i < nr - 1)
            {
                for(int j = i; j < s.length(); j+=n)
                {
                    ans+=s[j];
                    if(j + k < s.length()) ans+=s[j + k];
                }
            }
            else
            {
                for(int j = i; j < s.length(); j+=n)
                {
                    ans+=s[j];
                    if(n == 0) break;
                }
            }
            k-=2;
        }
        return ans;
    }
};