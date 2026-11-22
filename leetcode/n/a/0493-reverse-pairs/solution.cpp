/*
 * @lc app=leetcode id=493 lang=cpp
 *
 * [493] Reverse Pairs
 */

// @lc code=start
class Solution {
public:
    int ans = 0;
    void merge(vector<int>& nums,int low,int mid,int high)
    {
        int n1 = mid - low + 1;
        int n2 = high - mid;
        vector<int>a(n1),b(n2);
        for(int i = 0; i < n1; i++) a[i] = nums[low + i];
        for(int i = 0; i < n2; i++) b[i] = nums[mid + 1 + i];
        int r = mid + 1;
        for(int i = low; i <= mid; i++)
        {
            while(r <= high && nums[i] > 1LL*2*nums[r]) r++;
            ans = ans + (r - (mid + 1));
        }
        int i = 0,j = 0,k = low;
        while(i < n1 && j < n2)
        {
            if(a[i] < b[j]) nums[k++] = a[i++];
            else nums[k++] = b[j++];
        }
        while(i < n1) nums[k++] = a[i++];
        while(j < n2) nums[k++] = b[j++];
    }
    void mergesort(vector<int>& nums,int low,int high)
    {
        if(low < high)
        {
            int mid = (low + high)/2;
            mergesort(nums,low,mid);
            mergesort(nums,mid + 1,high);
            merge(nums,low,mid,high);
        }
    }
    int reversePairs(vector<int>& nums) {
        mergesort(nums,0,nums.size() - 1);
        return ans;
    }
};
// @lc code=end