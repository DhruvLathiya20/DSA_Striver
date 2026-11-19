class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();

        int case1=nums[n-1]-nums[2];
        int case2=nums[n-2]-nums[1];
        int case3=nums[n-3]-nums[0];

        return min({case1,case2,case3});









        // int score=INT_MAX;
        // vector<int> case1={nums.begin(),nums.end()};
        
        // case1[0]=case1[2];
        // case1[1]=case1[2];
        // int maxScore=case1[n-1]-case1[0];
        // score=min(maxScore,score);


        // vector<int> case2={nums.begin(),nums.end()};
        
        // case2[n-1]=case2[n-3];
        // case2[n-2]=case2[n-3];
        // maxScore=case2[n-1]-case2[0];
        // score=min(maxScore,score);


        // vector<int> case3={nums.begin(),nums.end()};
        
        // case3[0]=case3[n-2];
        // case3[n-1]=case3[n-2];
        
        // sort(case3.begin(),case3.end());
        // maxScore=case3[n-1]-case3[0];
        // score=min(maxScore,score);

        
        // return score;
    }
};