class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int s = 0;
        for(int i : nums) s|=i;
        return s*(1 << (nums.size() - 1));
    }
};