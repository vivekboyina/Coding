// #define i long long
vector<int>spf(1000001,-1);
class Solution {
public: 
    void prime()
    {
        spf[0] = 0;
        spf[1] = 1;
        for(int i = 2; i * i <= 1000000; i++)
        {
            if(spf[i] == -1)
            {
                for(int j = i; j <= 1000000; j+=i) if(spf[j] == -1) spf[j] = i;
            }
        }
        for(int i = 2; i <= 1000000; i++) if(spf[i] == -1) spf[i] = i;
    }
    int minOperations(vector<int>& nums) {
        static int flag = 0 ;
        if(flag == 0)
        {
            prime();
            flag = 1 ;
        }
        int ans = 0;
        int n = nums.size();
        for(int i = n - 2; i >= 0; i--)
        {
            if(nums[i] > nums[i + 1])
            {
                if(spf[nums[i]] == nums[i]) continue;
                while(nums[i] > nums[i + 1])
                {
                    if(spf[nums[i]] == nums[i]) break;
                    nums[i] = spf[nums[i]];
                    ans+=1;
                }
            }
        }
        for(int i = 0; i < n - 1; i++) if(nums[i] > nums[i + 1]) return -1;
        return ans;
    }
};