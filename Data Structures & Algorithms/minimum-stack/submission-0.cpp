class MinStack {
public:
    stack <pair<int,int>> s;
    MinStack( ) {
       
    }
    
    void push(int val) {
        if(s.empty()){
            s.push({val,val});
        }
        else{
            int s_min = min(val, s.top().second);
            s.push({val,s_min});
        }
    }
    
    void pop() {
        if(!s.empty()){
            s.pop();
        } 
    }
    
    int top() {
        if(!s.empty()) return s.top().first;
    }
    
    int getMin() {
         if(!s.empty()) return s.top().second;
    }
};
