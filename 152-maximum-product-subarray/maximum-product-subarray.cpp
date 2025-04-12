class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int maxProd = nums[0], minProd = nums[0], result = nums[0];
        
        for (int i = 1; i < nums.size(); i++) {
            int tempMax = max({nums[i], nums[i]*maxProd, nums[i]*minProd});
            minProd = min({nums[i], nums[i]*maxProd, nums[i]*minProd});
            maxProd = tempMax;
            result = max(result, maxProd);
        }
        return result;
    }
};