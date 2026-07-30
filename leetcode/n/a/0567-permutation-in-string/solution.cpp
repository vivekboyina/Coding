class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.length();
        if(n > s2.size()) return false;
        vector<int>a(26),b(26);
        for(char i : s1) a[i - 'a']+=1;
        for(int i = 0; i < n; i++) b[s2[i] - 'a']+=1;
        if(a == b) return true;
        for(int i = n; i < s2.length(); i++)
        {
            b[s2[i - n] - 'a']-=1;
            b[s2[i] - 'a']+=1;
            if(a == b) return true;
        }
        return false;
    }
};