class Solution {
public:
    void complete(stack<char>& st)
    {
        string k = "";
        while(!st.empty() && st.top() != '[')
        {
            k+=st.top();
            st.pop();
        }
        if(!st.empty() && st.top() == '[') st.pop();
        string num = "";
        while(!st.empty() && st.top() >= '0' && st.top() <= '9')
        {
            num+=st.top();
            st.pop();
        }
        reverse(num.begin(),num.end());
        int n = stoi(num);
        string c = k;
        for(int i = 1; i < n; i++) k+=c;
        for(int i = k.length() - 1; i >= 0; i--) st.push(k[i]);
    }
    string decodeString(string s) {
        stack<char>st;
        for(char i : s)
        {
            if(i == ']') complete(st);
            else st.push(i);
        }
        string ans = "";
        while(!st.empty())
        {
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};