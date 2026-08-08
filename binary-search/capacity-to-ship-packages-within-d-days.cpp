class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(), weights.end()); // The minimum possible capacity is the max weight
        int right = 0;
        for (int weight : weights) {
            right += weight; // The maximum possible capacity is the sum of all weights
    }

    // Binary search for the smallest ship capacity that works
    while (left < right) {
        int mid = left + (right - left) / 2;
        int currentWeight = 0;
        int requiredDays = 1; // Start with the first day
        
        // Try to ship the packages within the current capacity
        for (int weight : weights) {
            currentWeight += weight;
            if (currentWeight > mid) {
                requiredDays++; // If the current weight exceeds capacity, we start a new day
                currentWeight = weight; // Start with the current package
            }
        }
        
        // If we need more than 'days' days, increase the capacity
        if (requiredDays > days) {
            left = mid + 1;
        } else {
            right = mid; // Otherwise, we try a smaller capacity
        }
    }
    
    return left; // The minimum capacity that works
}
        
    
};