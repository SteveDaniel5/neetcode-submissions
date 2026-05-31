class Solution {
public:
    string decodeString(string s) {
        stack<int>num;
        stack<string>st;
          int numans = 0;
        
        for(int i=0;i<s.length();i++){
            if(s[i]==']'){
                string s1="";
              
                while(!st.empty()&&st.top()!="[")
                {
                    s1 = st.top()+s1;
                    st.pop();
                    
                }
                st.pop();
                int times = num.top();
                num.pop();
                string ans ="";
                for(int i =0;i<times;i++){
                    ans +=s1;

                }
                st.push(ans);

            }
            else{
              
                if(isdigit(s[i])){
                 numans = numans *10 + (s[i]-'0');
                }
                 
                else if (s[i]=='['){
                         num.push(numans);
                            numans =0;
                            string temp="";
                            temp +=s[i];
                            st.push(temp);
                             }
                   
                   else{
                        string temp="";
                            temp +=s[i];
                            st.push(temp);
                        
                   } 
                }
            }
             string finalans="";
        while(!st.empty()){
            finalans =st.top() +finalans;
            st.pop();
        }
        return finalans;

        }
       
           

        
    
};