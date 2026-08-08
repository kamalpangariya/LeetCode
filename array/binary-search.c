int search(int* nums, int numsSize, int target) {
    //int index = -1;
    int i = 0;
    int h=numsSize-1;
    
    while(i<=h) {
        int mid = (i+h)/2;
        if (nums[mid] < target ) {
            i = mid+1;
            // mid = (i + numsSize)/2;
        }
        else if(nums[mid] > target) {
            h = mid-1;
            // mid = (i+numsSize)/2;
        }
        else
            return mid;
    }
    return -1 ;
    
}