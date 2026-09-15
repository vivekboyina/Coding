class Solution {
public:
    vector<int> countBits(int n) {
        string s;
        vector<int>ans(n + 1);
        for(int i = 0; i <= n; i++)
        {
            s = bitset<32>(i).to_string();
            ans[i] = count(s.begin(),s.end(),'1');
        }
        return ans;
    }
};