class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        if(m == n) return -1;
        int ans = 1;
        while(m > 0 && n > 0)
        {
            if((m & 1) ^ (n & 1) == 1) return ans;
            m = m >> 1;
            n = n >> 1;
            ans+=1;
        }
        return ans;
    }
};