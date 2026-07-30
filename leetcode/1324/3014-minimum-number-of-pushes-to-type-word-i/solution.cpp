class Solution {
public:
    int minimumPushes(string word) {
        int n = word.length();
        int ans = 0;
        int a = 1;
        while(n > 0)
        {
            if(n > 8) ans+=a*8;
            else ans+=a*n;
            n-=8;
            a+=1;
        }
        return ans;
    }
};