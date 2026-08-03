class Solution {
public:
    vector<string> validStrings(int n) {
        vector<string>ans;
        string s;
        int cnt;
        for(int i = 0; i < (1 << n); i++)
        {
            s = "";
            cnt = 0;
            for(int j = 0; j < n; j++)
            {
                if(i & (1 << j))
                {
                    s+='1';
                    cnt = 0;
                }
                else
                {
                    cnt++;
                    s+='0';
                }
                if(cnt > 1) break;
            }
            if(cnt < 2) ans.push_back(s);
        }
        return ans;
    }
};