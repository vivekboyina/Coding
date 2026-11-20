class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        map<int,int>mp;
        for(int i : nums) mp[i]++;
        vector<int>ans;
        for(auto i : mp) if(i.second == 1) ans.push_back(i.first);
        return ans; 
    }
};