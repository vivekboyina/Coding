class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int>mp;
        priority_queue<int>pq;
        for(int i = 0; i < k; i++)
        {
            pq.push(nums[i]);
            mp[nums[i]]++;
        }
        vector<int>ans;
        ans.push_back(pq.top());
        for(int i = k; i < n; i++)
        {
            mp[nums[i - k]]--;
            mp[nums[i]]++;
            pq.push(nums[i]);
            while(mp[pq.top()] == 0) pq.pop();
            ans.push_back(pq.top());
        }
        return ans;
    }
};