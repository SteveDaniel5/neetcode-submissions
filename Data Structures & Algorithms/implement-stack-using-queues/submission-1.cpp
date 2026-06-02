class MyStack {
public:
    queue<int>pri;
    queue<int>sec;

    MyStack() {
        
    }
    
    void push(int x) {
        pri.push(x);
        
    }
    
    int pop() {
      if (!pri.empty()){
            while(pri.size()!=1){
                int temp = pri.front();
                sec.push(temp);
                pri.pop();
            }
           
      }
       int ans = pri.front();
       pri.pop();
      while (!sec.empty()){
         int temp = sec.front();
                pri.push(temp);
                sec.pop();

      }
      return ans;
        
    }

        
    
    
    int top() {
       return pri.back();
        
    }
    
    bool empty() {
        if(sec.empty() && pri.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */