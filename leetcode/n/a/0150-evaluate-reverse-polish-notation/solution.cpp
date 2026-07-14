class Solution {
public:
    int evalRPN(vector<string>& tkns) {
        stack<int>st;
        int a;
        for(string i : tkns)
        {
            if(i == "+")
            {
                a = st.top();
                st.pop();
                a = a + st.top();
                st.pop();
                st.push(a);
            }
            else if(i == "-")
            {
                a = st.top();
                st.pop();
                a = st.top() - a;
                st.pop();
                st.push(a);
            }
            else if(i == "*")
            {
                a = st.top();
                st.pop();
                a = a * st.top();
                st.pop();
                st.push(a);
            }
            else if(i == "/")
            {
                a = st.top();
                st.pop();
                a = st.top() / a;
                st.pop();
                st.push(a);
            }
            else st.push(stoi(i));
        }
        return st.top();
    }
};
