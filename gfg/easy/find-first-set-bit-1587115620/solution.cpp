class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int ans = 1;
        while(n)
        {
            if((n & 1) ^ 1 == 0) return ans;
            ans+=1;
            n = n >> 1;
        }
        return 0;
    }
};