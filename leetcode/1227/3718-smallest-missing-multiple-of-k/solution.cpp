class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i = 1; i > 0; i++)
            {
                int f = k*i;
                auto it = find(nums.begin(),nums.end(),f);
                if(it == nums.end()) return f;
            }
        return -1;
    }
};