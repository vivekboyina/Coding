class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>val;
        string s = "123456789";
        int i = 0;
        int j = 1;
        int k = j - i;
        long long curr = (s[i] - '0')*10 + (s[j] - '0');
        for(int p = 1; p < 36; p++)
        {
            val.push_back(curr);
            curr = curr - (s[i] - '0')*pow(10,k);
            i++;
            j++;
            if(j >= 9)
            {
                i = 0;
                j = k + 1;
                k+=1;
                curr = 0;
                for(int l = i; l <= j; l++) curr = curr*10 + (s[l] - '0');
            }
            else curr = curr*10 + (s[j] - '0');
        }
        val.push_back(123456789);
        vector<int>ans;
        for(long long it : val) if(it >= low && it <= high) ans.push_back(it);
        return ans;
    }
};