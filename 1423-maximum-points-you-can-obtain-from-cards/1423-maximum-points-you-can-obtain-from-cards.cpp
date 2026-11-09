class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int leftSum=accumulate(cardPoints.begin(),cardPoints.begin()+k,0);
        int rightSum=0;
        int maxSum=leftSum;
        for(int i=0;i<k;i++){
            leftSum-=cardPoints[k-1-i];
            rightSum+=cardPoints[n-1-i];
            maxSum=max(maxSum,rightSum+leftSum);
        }
        return maxSum;
    }
};