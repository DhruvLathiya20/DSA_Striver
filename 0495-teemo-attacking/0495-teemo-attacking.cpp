class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans=duration;
        for(int i=1;i<timeSeries.size();i++){
            if(timeSeries[i]>timeSeries[i-1]){
                int t1=timeSeries[i-1];
                int t2=timeSeries[i];
                int time=t2-t1;
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