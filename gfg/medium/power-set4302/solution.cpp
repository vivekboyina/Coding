class Solution {
  public:
    void rec(vector<string>& ans,string s,string sub,int i)
    {
        if(i >= s.length())
        {
            ans.push_back(sub);
            return;
        }
        rec(ans,s,sub + s[i],i + 1);
        rec(ans,s,sub,i + 1);
    }
    vector<string> powerSet(string &s) {
        // Code here
        vector<string>ans;
        rec(ans,s,"",0);
        sort(ans.begin(),ans.end());
        return ans;
    }
};