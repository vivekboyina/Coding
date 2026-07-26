class Solution {
public:
    int shipWithinDays(vector<int>& wei, int days) {
        int low = INT_MIN;
        int high = 0;
        for(int i : wei)
        {
            low = max(i,low);
            high+=i;
        }
        int cnt = 0;
        int w = 0;
        int mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            cnt = 0;
            w = 0;
            for(int i : wei)
            {
                w+=i;
                if(w > mid)
                {
                    w = i;
                    cnt++;
                }
            }
            if(w > 0) cnt++;
            if(cnt > days) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};