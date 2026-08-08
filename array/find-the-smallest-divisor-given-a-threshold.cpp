class Solution {
public:
int max(vector<int>&nums){
    int maxVal=INT_MIN;
    for(int i=0;i<nums.size();i++){
      if(maxVal<nums[i]){
        maxVal=nums[i];
      }
    }
    return maxVal;
}
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=max(nums);
        while(low<=high){
            int mid=(low+high)/2;
            int sum=0;
            for(int i=0;i<nums.size();i++){
            sum+=(nums[i]+mid-1)/mid;
            }
            if(sum<=threshold){
                high=mid-1;
            }else{
                low=mid+1;
            }

        }
        return low;
    }
};