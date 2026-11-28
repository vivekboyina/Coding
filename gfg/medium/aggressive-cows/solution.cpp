class Solution {
  public:
    int aggressiveCows(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        int l = 0;
        int h = arr[arr.size() - 1] - arr[0];
        int m,cnt,pr;
        int n = arr.size();
        int ans = INT_MIN;
        while(l <= h)
        {
            m = l + (h - l)/2;
            cnt = 0;
            pr = arr[0];
            
            for(int i = 1; i < n; i++)
            {
                if(arr[i] - pr >= m)
                {
                    pr = arr[i];
                    cnt++;
                }
            }
            if(cnt >= k - 1)
            {
                ans = max(ans,m);
                l = m + 1;
            }
            else  h = m - 1;
        }
        return ans;
    }
};