class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& tmp) {
        int n = tmp.size();
        vector<int>ans(n,0);
        stack<int>st;
        for(int i = n - 1; i >= 0; i--)
        {
            if(!st.empty())
            {
                while(!st.empty() && tmp[st.top()] <= tmp[i]) st.pop();
                if(!st.empty() && tmp[st.top()] > tmp[i]) ans[i] = st.top() - i;
            }
            st.push(i);
        }
        return ans;
    }
};
