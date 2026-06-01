class MyQueue {
public:
    stack<int>mainstk;
    stack<int>queuestk;
    MyQueue() {
        
    }
    
    void push(int x) {
        mainstk.push(x);

        
    }
    
    int pop() {
        if(!queuestk.empty()){
            int temp =queuestk.top();
            queuestk.pop();
            return temp;

        }
        else{
            while(!mainstk.empty()){
                queuestk.push(mainstk.top());
                mainstk.pop();

            }
            int temp =queuestk.top();
            queuestk.pop();
            return temp;

        }
        
    }
    
    int peek() {
        if(queuestk.empty()){
            if(mainstk.empty()){
                return -1;
            }
            else{
                while(!mainstk.empty()){
                    int temp = mainstk.top();
                    queuestk.push(temp);
                    mainstk.pop();
                }
                return queuestk.top();
            }
        }
        else{
            return queuestk.top();
        }
        
    }
    
    bool empty() {
        if(queuestk.empty() && mainstk.empty()){
            return true;
        }
        else{
            return false;
        }
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */