class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        long long moves=0;
        for(int i : nums){
            moves += i-mn;
        }
        return moves;
    }
};