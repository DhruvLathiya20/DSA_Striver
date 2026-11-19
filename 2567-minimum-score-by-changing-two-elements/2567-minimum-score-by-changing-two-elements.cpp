class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int minScore=INT_MAX;
        int ans=0;
        int score=INT_MAX;
        vector<int> case1;
        for(int i=0;i<n;i++){
            case1.push_back(nums[i]);
        }
        case1[0]=case1[2];
        case1[1]=case1[2];
        int maxScore=case1[n-1]-case1[0];
        score=min(maxScore,score);


        vector<int> case2;
        for(int i=0;i<n;i++){
            case2.push_back(nums[i]);
        }
        case2[n-1]=case2[n-3];
        case2[n-2]=case2[n-3];
        maxScore=case2[n-1]-case2[0];
        score=min(maxScore,score);


        vector<int> case3;
        for(int i=0;i<n;i++){
            case3.push_back(nums[i]);
        }
        case3[0]=case3[n-2];
        case3[n-1]=case3[n-2];
        
        sort(case3.begin(),case3.end());
        maxScore=case3[n-1]-case3[0];
        score=min(maxScore,score);

        
        return score;
    }
};