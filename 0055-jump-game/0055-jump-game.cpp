class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int index = 0;
        int jump = 0;
        while (index <= jump) {
            jump = max(jump, index + nums[index]);
            if (jump >= n - 1) {
                return true;
            }
            index++;
        }
        return false;
    }
};