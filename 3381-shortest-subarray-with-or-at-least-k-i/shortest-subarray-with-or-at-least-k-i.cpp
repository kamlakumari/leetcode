class Solution {
public:
    int minimumSubarrayLength(vector<int>& nums, int k) {
      int n = nums.size();
    int minLen = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int currentOr = 0;
        for (int j = i; j < n; ++j) {
            currentOr |= nums[j];
            if (currentOr >= k) {
                minLen = min(minLen, j - i + 1);
                break;  // break early since we found a valid subarray
            }
        }
    }

    return minLen == INT_MAX ? -1 : minLen;
}
};