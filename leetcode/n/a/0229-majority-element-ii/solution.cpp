class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int num1 = INT_MAX;
        int num2 = INT_MAX;
        int cnt1 = 0;
        int cnt2 = 0;
        for(int i : nums)
        {
            if(i == num1) cnt1++;
            else if(i == num2) cnt2++;
            else if(cnt1 == 0)
            {
                num1 = i;
                cnt1++;
            }
            else if(cnt2 == 0)
            {
                num2 = i;
                cnt2++;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0;
        cnt2 = 0;
        for(int i : nums)
        {
            if(i == num1) cnt1++;
            else if(i == num2) cnt2++;
        }
        int n = nums.size();
        vector<int>tuf;
        if(cnt1 > n/3) tuf.push_back(num1);
        if(cnt2 > n/3) tuf.push_back(num2);
        return tuf;
    }
};