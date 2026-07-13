class Solution {
public:
    int calPoints(vector<string>& op) {
        stack<string>st;
        int a;
        string b = "";
        for(string i : op)
        {
            if(i == "+" && !st.empty())
            {
                a = stoi(st.top());
                st.pop();
                a = a + stoi(st.top());
                st.push(to_string(a - stoi(st.top())));
                st.push(to_string(a));
            }
            else if(i == "C") st.pop();
            else if(i == "D") st.push(to_string(stoi(st.top())*2));
            else st.push(i);
        }
        int ans = 0;
        while(!st.empty())
        {
            ans = ans + stoi(st.top());
            st.pop();
        }
        return ans;
    }
};