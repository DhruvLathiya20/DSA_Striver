class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;
        if (x == 0 || x == 1) {
            return x;
        }

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if ((long)mid * mid > (long)x) {
                high = mid - 1;
            } else if (mid * mid == x) {
                return mid;
            } else {
                low = mid + 1;
            }
        }
        return high;
    }
};