class Solution {
public:
    string reverseParentheses(string s) {
        string ans = "";

        for (char ch : s) {

            if (ch == ')') {

                string temp = "";

                // Take characters until '('
                while (ans.back() != '(') {
                    temp += ans.back();
                    ans.pop_back();
                }

                // Remove '('
                ans.pop_back();

                // Add reversed part
                ans += temp;
            }
            else {
                ans += ch;
            }
        }

        return ans;
    }
};