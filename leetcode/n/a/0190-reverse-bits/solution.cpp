class Solution {
public:
    int reverseBits(int n) {
        string s = bitset<32>(n).to_string();
        reverse(s.begin(),s.end());
        unsigned long long ans = bitset<32>(s).to_ullong();
        return ans;
    }
};