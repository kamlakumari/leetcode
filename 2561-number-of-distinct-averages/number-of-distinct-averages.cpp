class Solution {
public:
    int distinctAverages(vector<int>& nums) {
       
        sort(nums.begin(), nums.end());
        unordered_set<double> avgSet;
        int i = 0, j = nums.size() - 1;

        while (i < j) {
            double avg = (nums[i] + nums[j]) / 2.0;
            avgSet.insert(avg);
            i++;
            j--;
        }

        return avgSet.size();
    }
};