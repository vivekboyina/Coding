class Solution {
public:
    void rec(int n,int op,int cl,string& s,vector<string>& ans)
    {
        if(op == n && cl == n)
        {
            ans.push_back(s);
            return;
        }
        if(op < n)
        {
            s+='(';
            op++;
            rec(n,op,cl,s,ans);
            s.pop_back();
            op--;
        }
        if(op > cl)
        {
            s+=')';
            cl++;
            rec(n,op,cl,s,ans);
            s.pop_back();
            cl--;
        }
    }
    vector<string> generateParenthesis(int n) {
        string s = "";
        vector<string>ans;
        int op = 0;
        int cl = 0;
        rec(n,op,cl,s,ans);
        return ans;
    }
};