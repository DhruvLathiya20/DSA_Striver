class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();
        int lp = 0, rp = n - 1;
        while (lp < rp) {
            int w = rp - lp;
            int h = min(height[rp], height[lp]);
            int currentWater = w * h;
            maxWater = max(maxWater, currentWater);

            if (height[lp] < height[rp]) {
                lp++;
            } else {
                rp--;
            }
        }
        return maxWater;
    }
};