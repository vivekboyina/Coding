class Solution {
public:
    void bkt(int i,vector<string>& ans,string& k,string s)
    {
        if(k.length() == s.length())
        {
            ans.push_back(k);
            return;
        }
        if(isalpha(s[i]))
        {
            k.push_back(tolower(s[i]));
            bkt(i + 1,ans,k,s);
            k.pop_back();
            k.push_back(toupper(s[i]));
            bkt(i + 1,ans,k,s);
            k.pop_back();
        }
        else
        {
            k.push_back(s[i]);
            bkt(i + 1,ans,k,s);
            k.pop_back();
        }
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>ans;
        string k = "";
        bkt(0,ans,k,s);
        return ans;
    }
};