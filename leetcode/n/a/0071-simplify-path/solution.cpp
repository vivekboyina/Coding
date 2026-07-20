class Solution {
public:
    string simplifyPath(string path) {
        string s = "";
        stack<string>st;
        int cnt = 0;
        for(char i : path)
        {
            if(i == '/')
            {
                if(cnt > 0 && s.length() <= cnt)
                {
                    if(cnt > 2)
                    {
                        st.push(s);
                        st.push("/");
                    }
                    else if(cnt == 2)
                    {
                        if(!st.empty()) st.pop();
                        if(!st.empty()) st.pop();
                    }
                    s = "";
                    cnt = 0;
                }
                if(st.empty()) st.push("/");
                else if(s == "") continue;
                else
                {
                    st.push(s);
                    st.push("/");
                }
                s = "";
                cnt = 0;
            }
            else if(i == '.')
            {
                cnt+=1;
                s+='.';
            }
            else s+=i;
        }
        if(cnt > 0 && s.length() <= cnt)
        {
            if(cnt > 2)
            {
                st.push(s);
                st.push("/");
            }
            else if(cnt == 2)
            {
                if(!st.empty()) st.pop();
                if(!st.empty()) st.pop();
            }
            s = "";
            cnt = 0;
        }
        string ans = "";
        if(s.length() > 0) st.push(s);
        stack<string>ts;
        while(!st.empty())
        {
            ts.push(st.top());
            st.pop();
        }
        while(!ts.empty())
        {
            ans+=ts.top();
            ts.pop();
        }
        if(ans.length() > 1 && ans[ans.size() - 1] == '/') ans.pop_back();
        if(ans == "") ans = "/";
        return ans;
    }
};