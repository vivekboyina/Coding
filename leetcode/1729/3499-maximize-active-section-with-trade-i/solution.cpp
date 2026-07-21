class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int ones=0,l=0,r=0;
        for(char ch:s) if(ch == '1') ones++;
        int ans = ones;
        while(r < s.size() && s[r] == '1') {
            r++;
        }
        while(r < s.size()) {
            int lzero=0,mones=0,rzero=0;
            while(s[r] == '0') {
                lzero++;
                r++;
            }
            while(s[r] == '1') {
                mones++;
                r++;
            }
            if(mones == 0) break;
            int rstart = r;
            while(s[r] == '0') {
                rzero++;
                r++;
            }
            if(lzero > 0 && rzero > 0) {
                int win = lzero+mones+rzero;
                ans = max(ans,ones-mones+win);
            }
            r = rstart;
        }
        return ans;
    }
};