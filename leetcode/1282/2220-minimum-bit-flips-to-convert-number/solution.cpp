class Solution {
public:
    string binary(int n)
    {
        string b = "";
        while(n)
        {
            if(n % 2 == 0) b+='0';
            else b+='1';
            n/=2;
        }
        reverse(b.begin(),b.end());
        return b;
    }
    int minBitFlips(int start, int goal) {
        int ans = start ^ goal;
        string f = binary(ans);
        int n = f.length();
        int cnt = 0;
        for(int i = 0; i < n; i++) if(f[i] == '1') cnt++;
        return cnt;
    }
};