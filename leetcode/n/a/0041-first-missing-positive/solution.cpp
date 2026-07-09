class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map<int,bool>mp;
        for(int i : nums) if(i > 0) mp[i] = true;
        int ans = 1;
        while(mp.count(ans)) ans+=1;
        return ans;
    }
};