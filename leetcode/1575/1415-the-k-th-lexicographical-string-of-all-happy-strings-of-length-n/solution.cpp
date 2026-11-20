class Solution {
public:
    void rec(string& s,vector<string>& strs,int in,int k)
    {
        if(s.length() == k)
        {
            strs.push_back(s);
            return;
        }
        for(int i = 0; i < 3; i++)
        {
            if(in > 0 && s[in - 1] != (char)('a' + i))
            {
                s.push_back('a' + i);
                rec(s,strs,in + 1,k);
                s.pop_back();
            }
            else if(in == 0)
            {
                s.push_back('a' + i);
                rec(s,strs,in + 1,k);
                s.pop_back();
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<string>strs;
        string s = "";
        rec(s,strs,0,n);
        if(strs.size() < k) return "";
        return strs[k - 1];
    }
};