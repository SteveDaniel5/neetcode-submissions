class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans =0;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="C"){
                st.pop();
                continue;
            }
            if(operations[i]=="D"){
                int ans = st.top();
                ans = 2*ans;
                st.push(ans);
                continue;
            }
            if(operations[i]=="+"){
                int a1 = st.top();
                st.pop();
                int a2 = st.top();
                st.pop();
                int ans = a1+a2;
                st.push(a2);
                st.push(a1);
                st.push(ans);
                continue;

            }
            int a3 = stoi(operations[i]);
            st.push(a3);
        }
       while(!st.empty()){
        ans+=st.top();
        st.pop();
       }
       return ans;
        
    }
};