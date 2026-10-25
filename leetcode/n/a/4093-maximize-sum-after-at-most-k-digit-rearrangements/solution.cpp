class Solution {
public:
    long long maximizeSum(vector<int>& nums, int k) {
        unordered_map<long long,long long>mp;
        vector<long long>re;
        string s;
        long long chk;
        for(int i : nums)
            {
                s = to_string(i);
                sort(s.rbegin(),s.rend());
                chk = stoll(s);
                if(chk <= i) continue;
                re.push_back(chk - i);
            }
        sort(re.begin(),re.end());
        long long sum = 0;
        for(int i : nums) sum+=i;
        int n = re.size();
        int nn;
        for(int i = 0; i < min(k,n); i++)
        {
            nn = re[n - i - 1];
            sum+=nn;
            cout << nn << endl;
        }
        return sum;
    }
};