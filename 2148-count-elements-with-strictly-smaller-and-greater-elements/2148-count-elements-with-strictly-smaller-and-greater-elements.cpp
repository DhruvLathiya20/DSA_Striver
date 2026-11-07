class Solution {
public:
    int countElements(vector<int>& nums) {
        int minEle=*min_element(nums.begin(),nums.end());
        int maxEle=*max_element(nums.begin(),nums.end());
        int count=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<maxEle && nums[i]>minEle){
                count++;
            }
        }
        return count;
    }
};