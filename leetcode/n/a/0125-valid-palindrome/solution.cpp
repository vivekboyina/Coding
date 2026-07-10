class Solution {
public:
    bool valid(char i)
    {
        if(i >= 'A' && i <= 'Z') return true;
        else if(i >= 'a' && i <= 'z') return true;
        else if(i >= '0' && i <= '9') return true;
        return false;
    }
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while(i < j)
        {
            while(i < j && !valid(s[i])) i++;
            while(i < j && !valid(s[j])) j--;
            if(tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};
