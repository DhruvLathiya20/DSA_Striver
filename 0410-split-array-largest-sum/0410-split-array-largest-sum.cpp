class Solution {
public:
    bool countParts(vector<int>& nums, int limit,int k) {
       int student = 1;
       int pages = 0;
       for(auto i : nums){
        if(i > limit) return false;
        if(pages+i > limit){
            student++;
            pages = i;
        }else{
            pages+=i;
        }
       }
       if(student > k) return false;
       return true;
    }

    int splitArray(vector<int>& nums, int k) {
        int low = *min_element(nums.begin(),nums.end());
        int high = accumulate(nums.begin(),nums.end(),0);

        while(low<high){
            int mid = (low+high)/2;
            if(countParts(nums,mid,k)){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};