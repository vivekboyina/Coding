class Solution {
public:
    int maxArea(vector<int>& hgts) {
        int ans = 0;
        int i = 0;
        int j = hgts.size() - 1;
        while(i < j)
        {
            ans = max(ans,(min(hgts[i],hgts[j])*(j - i)));
            if(hgts[i] < hgts[j]) i++;
            else j--;
        }
        return ans;
    }
};
