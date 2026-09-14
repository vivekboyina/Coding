class Solution {
  public:
    vector<int> findSubarray(vector<int>& arr) {
        int ans = 0;
        int sum = 0;
        int l = -1;
        int r = -1;
        int j = 0;
        int i = 0;
        int n = arr.size();
        while(i < n)
        {
            sum = 0;
            if(arr[i] < 0)
            {
                i++;
                continue;
            }
            j = i;
            while(j < n && arr[j] >= 0)
            {
                sum+=arr[j];
                j++;
            }
            if(sum > ans)
            {
                l = i;
                r = j;
                ans = sum;
            }
            else if(sum == ans && (j - i) > (r - l))
            {
                l = i;
                r = j;
                ans = sum;
            }
            i = j;
        }
        vector<int>nums;
        if(l != -1 && r != -1) for(int k = l; k < r; k++) nums.push_back(arr[k]);
        else nums.push_back(-1);
        return nums;
    }
};