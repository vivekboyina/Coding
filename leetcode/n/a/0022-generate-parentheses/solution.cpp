class Solution {
public:
    void rec(int n,string s,int op,int cl,vector<string>& ans)
    {
        if(op == n && cl == n)
        {
            ans.push_back(s);
            return;
        }
        if(op < n)
        {
            s.push_back('(');
            rec(n,s,op + 1,cl,ans);
            s.pop_back();
        }
        if(op > cl)
        {
            s.push_back(')');
            rec(n,s,op,cl + 1,ans);
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        rec(n,"",0,0,ans);
        return ans;
    }
};