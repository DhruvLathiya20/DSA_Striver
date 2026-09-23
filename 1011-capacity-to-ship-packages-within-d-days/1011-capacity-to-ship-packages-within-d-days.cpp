class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low = *max_element(weights.begin(), weights.end());
        int high = accumulate(weights.begin(), weights.end(), 0);
        while (low <= high) {
            int mid = (low + high) / 2;
            int daysRequied = funReq(weights, mid);
            if (daysRequied <= days) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
        // for (int i = m; i <= s; i++) {
        //     int daysRequied = funReq(weights, i);
        //     if (daysRequied <= days) {
        //         return i;
        //     }
        // }
        // return 0;
    }

    int funReq(vector<int>& weights, int cap) {
        int day = 1, load = 0, n = weights.size();
        for (int i = 0; i < n; i++) {
            if ((load + weights[i]) > cap) {
                day++;
                load = weights[i];
            } else {
                load += weights[i];
            }
        }
        return day;
    }
};