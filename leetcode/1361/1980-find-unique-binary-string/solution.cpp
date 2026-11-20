class Solution {
public:
    string ans = "";
    unordered_map<string,bool>mp;
    void bkt(string& s,int n)
    {
        if(ans.length() == n) return;
        if(s.length() == n)
        {
            if(mp.find(s) == mp.end()) ans = s;
            return;
        }
        s.push_back('0');
        bkt(s,n);
        s.pop_back();
        s.push_back('1');
        bkt(s,n);
        s.pop_back();
    }
    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].length();
        for(string s : nums) mp[s] = true;
        string s = "";
        bkt(s,n);
        return ans;
    }
};