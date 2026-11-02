class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int midean=nums[n/2];
        long long moves=0;
        for(auto i : nums){
            moves += abs(i-midean);
        }
        return moves;
    }
};