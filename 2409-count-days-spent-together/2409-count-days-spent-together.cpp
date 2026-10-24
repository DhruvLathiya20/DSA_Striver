class Solution {
public:
    int convert(string date,vector<int> &monthsDays){
        int month=stoi(date.substr(0,2));
        int days=stoi(date.substr(3,2));
        int totalDays=days;
        for(int i=0;i<month-1;i++){
            totalDays+=monthsDays[i];
        }
        return totalDays;
    }
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> monthsDays={31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int a1=convert(arriveAlice,monthsDays);
        int a2=convert(leaveAlice,monthsDays);
        int b1=convert(arriveBob,monthsDays);
        int b2=convert(leaveBob,monthsDays);
        int arrive=max(a1,b1);
        int leave=min(a2,b2);
        return max(0,leave-arrive+1);
    }
};