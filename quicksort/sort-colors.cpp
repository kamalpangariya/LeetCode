class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i,j,k;
        for (i = 0; i < nums.size() ; i++) {
            for (j = k = i; j < nums.size() ; j++) {
                if (nums[j] < nums[k]) {
                    k = j;
                }
            }
            int temp = nums[i];
            nums[i] = nums[k];
            nums[k] = temp;
        }
    }
};