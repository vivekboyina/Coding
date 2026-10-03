class Solution {
public:
    int longestValidParentheses(string s) {
        vector<bool>ss(s.length(),false);
        stack<pair<char,int>>st;
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == ')' && !st.empty() && st.top().first == '(')
            {
                ss[st.top().second] = true;
                ss[i] = true;
                st.pop();
            }
            else if(s[i] == '(') st.push({s[i],i});
        }
        int ans = 0,maxy = 0;
        for(bool i : ss)
        {
            if(i == false) ans = 0;
            else ans+=1;
            maxy = max(ans,maxy);
        }
        return maxy;
    }
};