class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>m;
        for(int i = 1; i <= n; i++) m.push_back(i);
        int a = 0;
        while(m.size() > 1)
        {
            a = (a + k - 1) % m.size();
            m.erase(m.begin() + a);
        }
        return m[0];
    }
};