class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(') {
                st.push(0);
            } 
            else {
                int top = st.top();
                st.pop();
                int total = 0;

                if (top == 0) {
                    total = 1;
                } 
                else {
                    total = 2 * top;
                }
                st.top() += total;
            }
        }
        return st.top();
    }
};