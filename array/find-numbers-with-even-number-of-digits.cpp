class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;

        for (int i = 0 ; i<=nums.size()-1;i++) {
            string s = to_string(nums[i]);
            if (s.size() % 2 == 0) count ++;
        }
        return count;
    }
};

/* math implementation 
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i : nums) {
            int digits = log10(i) + 1;
            if (digits % 2 == 0) ++count;
        } 
        return count;
    }
};
*/

