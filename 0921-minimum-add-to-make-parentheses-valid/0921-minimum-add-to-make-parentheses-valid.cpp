class Solution {
public:
    int minAddToMakeValid(string s) {
        int p_count=0;
        int count=0;

        for(int i=0;i<s.length();i++){
            if(s[i]=='('){
                p_count++;
            }else{
                if(p_count>0){
                    p_count--;
                    continue;
                }
                count++;
            }
        }

        if(p_count > 0){
            return count+p_count;
        }
        return count;
        // stack<char> st;
        // int count = 0;
        // for (int i = 0; i < s.length(); i++) {
        //     if (s[i] == '(') {
        //         st.push(')');
        //     } else {
        //         if (st.empty()) {
        //             count++;
        //         } else {
        //             st.pop();
        //         }
        //     }
        // }
        // count += st.size();
        // return count;
    }
};