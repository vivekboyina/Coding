class Solution {
public:
    void rec(int in,string& tmp,string& dig,vector<string>& digs,vector<string>& ans)
    {
        if(tmp.length() == dig.length())
        {
            ans.push_back(tmp);
            return;
        }
        int k = (dig[in] - '0') - 2;
        for(int i = 0; i < digs[k].length(); i++)
        {
            tmp.push_back(digs[k][i]);
            rec(in + 1,tmp,dig,digs,ans);
            tmp.pop_back();
        }
    }
    vector<string> letterCombinations(string dig) {
        vector<string>digs(8);
        digs[0] = "abc";
        digs[1] = "def";
        digs[2] = "ghi";
        digs[3] = "jkl";
        digs[4] = "mno";
        digs[5] = "pqrs";
        digs[6] = "tuv";
        digs[7] = "wxyz";
        vector<string>ans;
        string tmp = "";
        rec(0,tmp,dig,digs,ans);
        return ans;
    }
};