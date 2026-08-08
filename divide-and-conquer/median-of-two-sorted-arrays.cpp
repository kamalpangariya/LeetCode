class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if (nums1.size() > nums2.size()) {
        swap(nums1, nums2);
    }
    
    int m = nums1.size();
    int n = nums2.size();
    
    int left = 0, right = m;
    
    while (left <= right) {
        int partition1 = left + (right - left) / 2;
        int partition2 = (m + n + 1) / 2 - partition1;
        
        // Edge cases: if partition1 is 0 or m, we use -INF or INF respectively
        int maxLeft1 = (partition1 == 0) ? INT_MIN : nums1[partition1 - 1];
        int minRight1 = (partition1 == m) ? INT_MAX : nums1[partition1];
        
        int maxLeft2 = (partition2 == 0) ? INT_MIN : nums2[partition2 - 1];
        int minRight2 = (partition2 == n) ? INT_MAX : nums2[partition2];
        
        if (maxLeft1 <= minRight2 && maxLeft2 <= minRight1) {
            // We found the correct partition
            if ((m + n) % 2 == 0) {
                // If even, median is the average of max of left side and min of right side
                return (max(maxLeft1, maxLeft2) + min(minRight1, minRight2)) / 2.0;
            } else {
                // If odd, median is the max of the left side
                return max(maxLeft1, maxLeft2);
            }
        } else if (maxLeft1 > minRight2) {
            // We need to move partition1 to the left
            right = partition1 - 1;
        } else {
            // We need to move partition1 to the right
            left = partition1 + 1;
        }
    }
    
    // If we reach here, it means the input arrays are not sorted or the problem is invalid
    throw invalid_argument("Input arrays are not sorted properly.");
}
        
    
};