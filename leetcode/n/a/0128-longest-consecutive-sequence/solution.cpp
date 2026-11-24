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
        priority_queue<int>pq;
        for(int i : nums) pq.push(i);
        int ans = 0;
        int cnt = 1;
        int tp = pq.top();
        while(!pq.empty())
        {
            if(abs(tp - pq.top()) == 1) cnt++;
            else if(abs(tp - pq.top()) > 1) cnt = 1;
            tp = pq.top();
            pq.pop();
            ans = max(ans,cnt);
        }
        return ans;
    }
};
// @lc code=end

