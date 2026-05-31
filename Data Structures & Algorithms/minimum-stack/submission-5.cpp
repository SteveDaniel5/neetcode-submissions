class MinStack {
    public:
        stack<pair<int,int>>st;
public:
    MinStack() {
        
        
        
    }
    
    void push(int val) {
        pair<int,int>pr;
        if (st.empty()){
            pr.first = val;
            pr.second = val;
            st.push(pr);

        }
        else{
            pair<int,int>topele;
            pair<int,int>currele;
            topele = st.top();
            if(topele.first<val){
                currele.first=topele.first;
                currele.second = val;
                st.push(currele);
                
            }
            else{
                currele.first=val;
                currele.second = val;
                st.push(currele);


            }
        }

        
    }
    
    void pop() {
        st.pop();
        
    }
    
    int top() {
        pair<int,int>temp;
        temp = st.top();

        return temp.second;
        
    }
    
    int getMin() {
        pair<int,int>temp;
        temp = st.top();

        return temp.first;
        
    }
};
