class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        for (int i = 0; i< nums.size()-1; i++) {
            sum = nums[i] + nums[i+1];
            nums[i+1] = sum;
        }
        return nums;
    }
};