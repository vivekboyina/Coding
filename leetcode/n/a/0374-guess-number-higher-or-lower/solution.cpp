class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int h = n;
        int m;
        while(l <= h)
        {
            m = l + (h - l)/2;
            if(guess(m) == 0) return m;
            else if(guess(m) == -1) h = m - 1;
            else l = m + 1;
        }
        return -1;
    }
};