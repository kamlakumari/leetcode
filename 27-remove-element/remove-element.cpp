class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
     int k = 0; // k keeps track of the number of elements not equal to val
    
    for (int i = 0; i < nums.size(); i++) { // Loop through the array
        if (nums[i] != val) {
            nums[k] = nums[i];
            k++;
        }
    }
    
    return k;
}

};