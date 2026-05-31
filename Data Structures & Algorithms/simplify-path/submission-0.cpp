class Solution {
public:
    string simplifyPath(string path) {
          stack<string>st;
          
          for(int i =0;i<path.size();i++){
            if(path[i]=='/'){
                continue;
            }
            string s2;
            while(i<path.size() && path[i]!='/'){
                s2+=path[i];
                i++;
            }
            if(s2==".."){
                if(!st.empty())
                st.pop();
                else
                    continue;

            }
            else if(s2 =="."){
                continue;
            }
            else{
                st.push(s2);
            }

            
          }
          string res;
          while(!st.empty()){
            res = '/'+st.top()+res;
            st.pop();
          }
          if(res.empty()){
            return "/";
          }
          else
          return res;

    }
};