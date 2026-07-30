class Solution {
  public:
    int posOfRightMostDiffBit(int m, int n) {
        //  code here
        if(m == n) return -1;
        int mn = m ^ n;
        int ans = 0;
        while(mn)
        {
            ans+=1;
            if(mn & 1 == 1) break;
            mn = mn >> 1;
        }
        return ans;
    }
};