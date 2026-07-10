class Solution {
public:
    string mergeAlternately(string w1, string w2) {
        int i = 0;
        int n1 = w1.length();
        int n2 = w2.length();
        string ans = "";
        while(i < n1 && i < n2)
        {
            ans+=w1[i];
            ans+=w2[i];
            i++;
        }
        while(i < n1) ans+=w1[i++];
        while(i < n2) ans+=w2[i++];
        return ans;
    }
};