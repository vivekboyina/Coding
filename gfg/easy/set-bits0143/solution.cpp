class Solution {
  public:
    int setBits(int n) {
        // Code here
        int ans = 0;
        while(n)
        {
            ans+=(n & 1);
            n = n >> 1;
        }
        return ans;
    }
};