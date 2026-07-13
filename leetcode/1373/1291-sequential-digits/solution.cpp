class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string s = "123456789";
        int i = 0;
        int j = 1;
        int k = j - i;
        long long curr = (s[i] - '0')*10 + (s[j] - '0');
        for(int p = 1; p < 36; p++)
        {
            if(curr >= low && curr <= high) ans.push_back(curr);
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
        curr = 123456789;
        if(curr >= low && curr <= high) ans.push_back(curr);
        return ans;
    }
};