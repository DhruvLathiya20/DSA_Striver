class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> st;
        int j=0;
        int i=0;
        while(i<pushed.size() || !st.empty()){
            if(!st.empty() && st.top()==popped[j])
            {
                st.pop();
                j++;
            }
            else if(i<pushed.size())
            {
                st.push(pushed[i]);
                i++;
            }
            else return false;
        }
       return true;
    }
};