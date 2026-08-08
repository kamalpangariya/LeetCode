class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int s = 2*nums.size();
        vector<int> n(s);
        int j = 0;
        for (int i = 0 ; i <= s-1; i++) {
            if (j == nums.size()-1) {
                n[i] = nums[j];
                j = 0;
            }
            else { 
                n[i] = nums[j];
                j++;
            }

        }
        return n;
    }
};