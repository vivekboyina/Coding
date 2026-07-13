class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(char i : s)
        {
            if(i == '(' || i == '[' || i == '{') st.push(i);
            else if(!st.empty())
            {
                if(st.top() == '(' && i == ')') st.pop();
                else if(st.top() =='[' && i == ']') st.pop();
                else if(st.top() =='{' && i == '}') st.pop();
                else return false;
            }
            else return false;
        }
        return st.empty();
    }
};
