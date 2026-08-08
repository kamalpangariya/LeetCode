/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int n, int t, int* returnSize) {
    static int ind[2]; 
    *returnSize = 2; 
   for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
           if(nums[i]+nums[j]==t){
                ind[0]=i;
                ind[1]=j;
                return ind;
           }
       }
   }
    return ind;
}