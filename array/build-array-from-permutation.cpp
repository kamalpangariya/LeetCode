class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int>arr = nums;
        for (int i = 0 ;  i < nums.size() ; i++ ){
            nums[i] = arr[arr[i]];
        }
        return nums;
    }
};