class Solution {
public:
    bool pal(string s,int i,int j)
    {
        while(i < j)
        {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i < j)
        {
            if(s[i] != s[j]) return pal(s,i + 1,j) || pal(s,i,j - 1);
            i++;
            j--;
        }
        return true;
    }
};