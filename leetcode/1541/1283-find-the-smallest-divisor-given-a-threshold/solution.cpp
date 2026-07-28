class Solution {
public:
    int smallestDivisor(vector<int>& nums, int th) {
        int low = 1;
        int high = INT_MIN;
        for(int i : nums) high = max(i,high);
        int mid;
        int cnt;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            cnt = 0;
            for(int i : nums)
            {
                if(i % mid == 0) cnt+=(i/mid);
                else cnt+=((i/mid) + 1);
            }
            if(cnt > th) low = mid + 1;
            else high = mid - 1;
        }
        return low;
    }
};