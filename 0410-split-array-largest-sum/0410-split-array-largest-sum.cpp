class Solution {
public:

    int countParts(vector<int>& nums, int limit) {
        int parts = 1;
        long long sum = 0;

        for (int x : nums) {

            if (sum + x > limit) {
                parts++;
                sum = x;
            }
            else {
                sum += x;
            }
        }

        return parts;
    }

    int splitArray(vector<int>& nums, int k) {

        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);

        while (low <= high) {

            int mid = low + (high - low) / 2;

            int parts = countParts(nums, mid);

            if (parts <= k) {
                // mid works
                // try smaller largest sum
                high = mid - 1;
            }
            else {
                // too many parts
                // need bigger limit
                low = mid + 1;
            }
        }

        return low;
    }
};