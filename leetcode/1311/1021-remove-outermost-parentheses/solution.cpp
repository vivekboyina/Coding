class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        string ans = "";
        int cnt = 0;
        for(char i : s)
        {
            if(st.empty() == true && i == '(') st.push(i);
            else if(st.empty() == false && i == '(' && st.top() == '(')
            {
                cnt+=1;
                ans+='(';             
            }
            else if(st.empty() == false && i == ')' && st.top() == '(' && cnt > 0)
            {
                ans+=')';
                cnt-=1;
            }
            else if(st.empty() == false && i == ')' && st.top() == '(' && cnt == 0) st.pop();
        }
        return ans;
    }
};