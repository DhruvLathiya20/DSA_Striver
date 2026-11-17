class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(int i=0; i<tokens.size(); i++)
        {
            if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/")
            {
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.pop();
                int answer=0;
                if(tokens[i]=="+") answer=num2+num1;
                if(tokens[i]=="-") answer=num2-num1;
                if(tokens[i]=="*") answer=num2*num1;
                if(tokens[i]=="/") answer=num2/num1;
                st.push(answer);
            }
            else
            {
                int value=stoi(tokens[i]);
                st.push(value);
            }
        }
        return st.top();
    }
};