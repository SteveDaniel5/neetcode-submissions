class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        
        for (int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="*" ||tokens[i]=="-"||tokens[i]=="+"||tokens[i]=="/" ){
                int num2 = st.top();
                    st.pop();
                    int num1 = st.top();
                    st.pop();
                if(tokens[i]=="+"){
                    int res = num2+num1;
                    st.push(res);
                    
                }
                if(tokens[i]=="*"){
                    int res = num2*num1;
                    st.push(res);
                }
                if(tokens[i]=="-"){
                    int res = num1-num2;
                    st.push(res);
                }
                 if(tokens[i]=="/"){
                    int res = (num1/num2);
                    st.push(res);
                }
                }
            else{
                int num = stoi(tokens[i]);
                st.push(num);
                }
        }
        int res = st.top();
        return res;

    }
};
