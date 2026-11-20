// @lc code=start
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int c1 = 0;
        int c2 = 0;
        int n1 = INT_MAX,n2 = INT_MAX;
        for(int i : nums)
        {
            if(c1 == 0)
            {
                n1 = i;
                c1+=1;
            }
            else if(c2 == 0)
            {
                n2 = i;
                c2+=1;
            }
            else if(n1 == i) c1+=1;
            else if(n2 == i) c2+=1;
            else
            {
                c1-=1;
                c2-=1;
            }
        }
        int n = nums.size();
        vector<int>ans;
        if(c1 > n/3) ans.push_back(n1);
        if(c2 > n/3 && n1 != n2) ans.push_back(n2);
        return ans;
    }
};
// @lc code=end

