class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        map<int,int>mp;
        for(int i : a) mp[i]+=1;
        for(int i : b) mp[i]+=1;
        vector<int>ans;
        for(auto it : mp) ans.push_back(it.first);
        return ans;
    }
};