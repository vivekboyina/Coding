class Solution {
  public:
    int getFirstSetBit(int n) {
        // code here
        int ans = 0;
        while(n)
        {
            ans+=1;
            if(n & 1 == 1) break;
            n = n >> 1;
        }
        return ans;
    }
};