class Solution {
public:
    int digitFrequencyScore(int n) {
        int ans = 0;
        int k;
        unordered_map<int,int>mp;
        while(n)
        {
            k = n % 10;
            n/=10;
            mp[k]++;
        }
        for(auto it : mp) ans+=(it.first*it.second);
        return ans;
    }
};