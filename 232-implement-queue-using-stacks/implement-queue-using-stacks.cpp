class MyQueue {
public:
    stack<int> s;
    stack<int> s1;
    void push(int x) {
        if(s.empty()){
            s.push(x);
            return;
        }
        while(!s.empty()){
            int a=s.top();
            s1.push(a);
            s.pop();
        }
        s.push(x);
        while(!s1.empty()){
            int a=s1.top();
            s.push(a);
            s1.pop();
        }
    }
    
    int pop() {
        int a=s.top();
        s.pop();
        return a;
    }
    
    int peek() {
        return s.top();
    }
    
    bool empty() {
        return s.empty();
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