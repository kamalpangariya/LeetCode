class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
    int missingCount = 0; // To keep track of missing positive numbers
    int current = 1; // Start checking from the first positive integer
    int i = 0; // Pointer to traverse the array
    
    while (missingCount < k) {
        // If current number is not in the array, it's missing
        if (i < arr.size() && arr[i] == current) {
            i++; // Move to the next element in the array
        } else {
            missingCount++; // Increase missing count
            if (missingCount == k) {
                return current; // Return the kth missing integer
            }
        }
        current++; // Check the next number
    }
    
    return -1; // If not found, return -1 (should never happen with valid input)
}
        
    
};