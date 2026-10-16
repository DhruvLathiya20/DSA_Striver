class Solution {
public:
    int beautySum(string s) {
        int sum=0;
        int n=s.length();
        for(int i=0;i<n;i++){
            vector<int> freq(26, 0);
            for(int j=i;j<n;j++){
                freq[s[j]-'a']++;
                int beauty = getMaxCount(freq) - getMinCount(freq);
                sum += beauty;
            }
        }
        return sum;   
    }
    
    int getMinCount(vector<int>& freq){
        int minCount = INT_MAX;
        for (int i : freq) {
            if (i != 0) {
                minCount = min(minCount, i);
            }
        }
        return minCount;
    }

    int getMaxCount(vector<int>& freq){
        int maxCount = INT_MIN;
        for (int i : freq) {
            if (i != 0) {
                maxCount = max(maxCount, i);
            }
        }
        return maxCount;
    }

};