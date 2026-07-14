class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asts) {
        stack<int>st;
        int s = 0;
        for(int i : asts)
        {
            if(!st.empty() && (st.top() > 0 && i < 0))
            {
                while(!st.empty() && (st.top() > 0 && i < 0))
                {
                    s = st.top() + i;
                    if(s > 0) break;
                    else if(s == 0)
                    {
                        st.pop();
                        break;
                    }
                    else st.pop();
                }
                if(s == 0) continue;
                else if((st.empty() && s != 0) || (!st.empty() && st.top() < 0 && i < 0)) st.push(i);
            }
            else st.push(i);
        }
        vector<int>ans;
        while(!st.empty())
        {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};