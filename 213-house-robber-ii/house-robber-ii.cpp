class Solution {
public:

 int robLinear(vector<int>& nums, int start, int end) {
        int prev1 = 0, prev2 = 0;
        for (int i = start; i <= end; i++) {
            int temp = max(nums[i] + prev1, prev2);
            prev1 = prev2;
            prev2 = temp;
        }
        return prev2;
    }
    int rob(vector<int>& nums) {
     int n = nums.size();
        if (n == 1) return nums[0];
        return max(robLinear(nums, 0, n - 2), robLinear(nums, 1, n - 1));
    }
};