#define ll long long
class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        ll low = 1;
        ll high = INT_MIN;
        for(ll i : piles) high = max(high,i);
        ll mid;
        ll cnt = 0;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            cnt = 0;
            for(ll i : piles)
            {
                if(i % mid == 0) cnt+=(i/mid);
                else cnt+=((i/mid) + 1);
            }
            if(cnt > h) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};