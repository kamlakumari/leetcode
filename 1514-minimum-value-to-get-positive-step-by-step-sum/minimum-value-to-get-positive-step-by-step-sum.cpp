class Solution {
public:
    int minStartValue(vector<int>& nums) {
     int sum = 0, min_sum = 0;

        for (int num : nums) {
            sum += num;
            min_sum = min(min_sum, sum);
        }

        return 1 - min_sum;
    }
};