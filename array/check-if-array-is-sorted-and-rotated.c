bool check(int* nums, int numsSize) {
    int n = numsSize;
    if (n == 1)  return true;

    int pos = 1;
    while (pos<n && nums[pos] >= nums[pos-1])
        pos++;
    if (pos==n)    return true;
    if (nums[pos]>nums[0])    return false;
    if (pos == n-1)    return true;

    pos+=1;
    while (pos<n && nums[pos] <= nums[0] && nums[pos] >= nums[pos-1])
        pos++;
    return pos == n;
}