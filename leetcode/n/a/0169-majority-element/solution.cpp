// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int num = -1;
        for(int i : nums)
        {
            if(cnt == 0)
            {
                cnt+=1;
                num = i;
            }
            else if(num != i) cnt-=1;
            else if(num == i) cnt+=1;
        }
        return num;
    }
};
// @lc code=end

