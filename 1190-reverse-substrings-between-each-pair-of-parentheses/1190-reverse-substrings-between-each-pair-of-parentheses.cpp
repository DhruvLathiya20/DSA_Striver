class Solution {
public:
    string reverseParentheses(string s) {
        string ans = "";
        for (char ch : s) {
            if (ch == ')') {
                string temp = "";
                while (ans.back() != '(') {
                    temp += ans.back();
                    ans.pop_back();
                }
                ans.pop_back();
                ans += temp;
            } else {
                ans += ch;
            }
        }

        return ans;
    }
};