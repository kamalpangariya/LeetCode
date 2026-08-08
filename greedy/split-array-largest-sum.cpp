class Solution {
public:
bool canSplit(const vector<int>& nums, int k, int maxSum) {
    int currentSum = 0;
    int count = 1;  // At least one subarray
    
    for (int num : nums) {
        currentSum += num;
        
        if (currentSum > maxSum) {
            // Start a new subarray
            count++;
            currentSum = num;
            
            if (count > k) {
                return false;
            }
        }
    }
    return true;
}

int splitArray(vector<int>& nums, int k) {
    int left = *max_element(nums.begin(), nums.end()); // The largest element, as the minimum sum can't be less than this
    int right = 0;
    for (int num : nums) {
        right += num;  // The total sum of the array
    }

    while (left < right) {
        int mid = left + (right - left) / 2;
        
        if (canSplit(nums, k, mid)) {
            right = mid; // Try for a smaller max sum
        } else {
            left = mid + 1; // Increase the max sum
        }
    }

    return left;
}
     
        
    
};
