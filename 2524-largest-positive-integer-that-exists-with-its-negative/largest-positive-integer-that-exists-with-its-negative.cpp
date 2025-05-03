class Solution {
public:
    int findMaxK(vector<int>& nums) {
     unordered_set<int> s;
    int maxK = -1;

    for (int num : nums) {
        if (s.count(-num)) {
            maxK = max(maxK, abs(num));
        }
        s.insert(num);
    }

    return maxK;
}
};