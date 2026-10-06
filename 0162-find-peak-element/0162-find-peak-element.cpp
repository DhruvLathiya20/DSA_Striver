class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // if(nums.size() == 1) return 0;
        // for(int i=1;i<nums.size()-1;i++){
        //     if(nums[i] > nums[i-1] && nums[i] > nums[i+1]){
        //         return i;
        //     }
        // }
        // if(nums[nums.size()-1] > nums[nums.size()-2]){
        //     return nums.size()-1;
        // }
        // if(nums[0] > nums[1]) return 0;
        // return -1;
        int low = 0;
        int high = nums.size()-1;
        while(low<high){
            int mid = low + (high - low) /2;
            if(nums[mid] > nums[mid+1]){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return high;
    }
};