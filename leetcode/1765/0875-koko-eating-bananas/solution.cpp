class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int hr) {
        int l = 1;
        int h = INT_MIN;
        for(int i : piles) h = max(i,h);
        int m;
        int n = piles.size();
        while(l < h)
        {
            m = l + (h - l)/2;
            int cnt = 0;
            for(int i : piles) cnt += (i % m == 0) ? i/m : (i + m)/m;
            if(cnt > hr) l = m + 1;
            else h = m;
        }
        return h;
    }
};