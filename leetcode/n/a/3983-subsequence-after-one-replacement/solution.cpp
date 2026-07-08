class Solution {
public:
    bool canMakeSubsequence(string s, string t) {
        vector<bool>fr(26,false);
        int s1 = s.length();
        int t1 = t.length();
        vector<int>ind(s1,-1);
        for(char i : t) fr[i - 'a'] = true;
        int i = 0;
        int j = 0;
        while(i < s1 && j < t1)
        {
            if(!fr[s[i] - 'a'])
            {
                i++;
                continue;
            }
            else if(s[i] == t[j]) ind[i] = j++;
            else
            {
                while(j < t1 && s[i] != t[j]) j++;
                if(s[i] == t[j]) ind[i] = j++;
            }
            i++;
        }
        int cnt = 0;
        for(int i = 0; i < s1; i++)
        {
            if(cnt > 0 && ind[i] == -1) return false;
            else if(ind[i] == -1)
            {
                if(i > 0 && ind[i - 1] == t1 - 1) return false;
                else if(i > 0 && i < s1 - 1 && ind[i + 1] != -1 && ind[i - 1] != -1 && abs(ind[i - 1] - ind[i + 1]) < 2) return false;
                else cnt+=1;
            }
        }
        return cnt < 2;
    }
};