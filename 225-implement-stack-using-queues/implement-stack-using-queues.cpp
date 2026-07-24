class MyStack {
public:
    queue<int> inp;
    queue<int> out;
    void push(int x) {
        if(inp.empty()){
            inp.push(x);
            return;
        }
        else{
            while(!inp.empty()){
                int a=inp.front();
                inp.pop();
                out.push(a);
            }
            inp.push(x);
            while(!out.empty()){
                int a=out.front();
                out.pop();
                inp.push(a);
            }
        }
    }
    
    int pop() {
        int a=inp.front();
        inp.pop();
        return a;
    }
    
    int top() {
       return inp.front(); 
    }
    
    bool empty() {
        return inp.empty();
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