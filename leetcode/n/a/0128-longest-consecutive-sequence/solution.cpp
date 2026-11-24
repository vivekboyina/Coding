/*
 * @lc app=leetcode id=128 lang=cpp
 *
 * [128] Longest Consecutive Sequence
 */

// @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        unordered_set<int>st;
        for(int i : nums) st.insert(i);
        int ans = 0;
        int cnt = 1;
        int cur;
        for(int i : st)
        {
            if(st.find(i - 1) == st.end())
            {
                cnt = 1;
                cur = i;
                while(st.find(cur + 1) != st.end())
                {
                    cnt++;
                    cur++;
                }
                ans = max(ans,cnt);
            }
        }
        return ans;
    }
};
// @lc code=end

