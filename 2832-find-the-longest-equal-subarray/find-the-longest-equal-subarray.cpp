class Solution {
public:
    int longestEqualSubarray(vector<int>& nums, int k) {
      unordered_map<int, vector<int>> positions;
    
    for (int i = 0; i < nums.size(); ++i) {
        positions[nums[i]].push_back(i);
    }

    int maxLen = 0;


    for (auto& [num, idxs] : positions) {
        int left = 0;

        for (int right = 0; right < idxs.size(); ++right) {
            // Number of deletions required to make subarray equal
            while ((idxs[right] - idxs[left] + 1) - (right - left + 1) > k) {
                left++;
            }
            maxLen = max(maxLen, right - left + 1);
        }
    }

    return maxLen;
}

int main() {
    vector<int> nums = {1, 3, 2, 3, 1, 3};
    int k = 3;
    cout << "Output: " << longestEqualSubarray(nums, k) << endl;
    return 0;
}
};