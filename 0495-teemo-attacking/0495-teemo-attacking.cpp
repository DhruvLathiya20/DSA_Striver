class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=duration;
        for(int i=1;i<timeSeries.size();i++){
            if(timeSeries[i]>timeSeries[i-1]){
                int time=timeSeries[i]-timeSeries[i-1];
                if(time>=duration){
                    ans+=duration;
                }else{
                    ans+=time;
                }
            }
        }
        return ans;
    }
};