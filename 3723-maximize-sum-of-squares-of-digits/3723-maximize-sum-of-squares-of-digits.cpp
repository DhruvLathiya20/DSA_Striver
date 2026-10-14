
class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string ans = "";
        if (sum > (9 * num)) return "";
        for (int i = 0; i < num; i++) {
            int digit=min(9, sum);
            ans+=to_string(digit);
            sum=sum-digit;
        }
        if (sum != 0) return "";
        return ans;
    }
};
