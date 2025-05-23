class Solution {
public:
    int maxArea(vector<int>& height) {
      int maxWater = 0;
        int left = 0, right = height.size() - 1;

        while (left < right) {
            int width = right - left;
            int water = min(height[left], height[right]) * width;
            maxWater = max(maxWater, water);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxWater;
    }
};