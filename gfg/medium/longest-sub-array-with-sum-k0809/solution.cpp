class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int, int> firstIndex;
    
    int prefixSum = 0;
    int maxLen = 0;

    for (int i = 0; i < arr.size(); i++) {
        prefixSum += arr[i];

        // Subarray from index 0 to i
        if (prefixSum == k) {
            maxLen = i + 1;
        }

        // Look for an earlier prefix sum
        if (firstIndex.find(prefixSum - k) != firstIndex.end()) {
            int len = i - firstIndex[prefixSum - k];
            maxLen = max(maxLen, len);
        }

        // Store only the first occurrence
        if (firstIndex.find(prefixSum) == firstIndex.end()) {
            firstIndex[prefixSum] = i;
        }
    }

    return maxLen;
    }
};