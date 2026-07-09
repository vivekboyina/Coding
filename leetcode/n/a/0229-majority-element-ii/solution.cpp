class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0;
        int cnt2 = 0;
        int num1,num2;
        int n = nums.size();
        for(int i : nums)
        {
            if(cnt1 == 0 && i != num2)
            {
                cnt1 = 1;
                num1 = i;
            }
            else if(cnt2 == 0 && i != num1)
            {
                cnt2 = 1;
                num2 = i;
            }
            else if(i == num1) cnt1+=1;
            else if(i == num2) cnt2+=1;
            else
            {
                cnt1-=1;
                cnt2-=1;
            }
        }
        cnt1 = cnt2 = 0;
        for(int i : nums)
        {
            if(i == num1) cnt1+=1;
            else if(i == num2) cnt2+=1;
        }
        vector<int>ans;
        if(cnt1 > n/3) ans.push_back(num1);
        if(cnt2 > n/3) ans.push_back(num2);
        return ans;
    }
};