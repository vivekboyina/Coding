class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int th) {
        int sum = 0;
        int n = arr.size();
        for(int i = 0; i < k; i++) sum+=arr[i];
        int ans = 0;
        if(sum/k > th) ans+=1;
        for(int i = k; i < n; i++)
        {
            sum-=arr[i - k];
            sum+=arr[i];
            cout << sum/k << endl;
            if((sum/k) >= th) ans+=1;
        }
        return ans;
    }
};