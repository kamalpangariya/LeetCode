void rotate(int* nums, int numsSize, int k) {
    k = k % numsSize; // Handle cases where k >= numsSize
    int temp[numsSize];

    // Copy last k elements to temp array
    for (int i = 0; i < k; i++) {
        temp[i] = nums[numsSize - k + i];
    }

    // Shift the rest of the elements to the right
    for (int i = numsSize - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    // Copy back the stored k elements
    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
    
}