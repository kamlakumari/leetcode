class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
       int n = cost.size();
        int prev1 = 0; 
        int prev2 = 0; 

        for (int i = n - 1; i >= 0; --i) {
            int current = cost[i] + min(prev1, prev2);
            prev1 = prev2;
            prev2 = current;
        }

        return min(prev1, prev2);
    }
};