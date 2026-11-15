class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        int n=arr.size();
        const int mod=1e9+7;
        long long prefix=0;
        long long count=0;
        long long even=1;
        long long odd=0;
        for(int i=0;i<n;i++){
            prefix+=arr[i];
            if(prefix%2 != 0){
                count+=even;
                odd++;
            }else{
                count+=odd;
                even++;
            }
            count%=mod;
        }
        return count;
    }
};