class MinStack {
public:
    stack<int> st;
    stack<int> st2;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        if(st2.empty())
            st2.push(val);
        else
            st2.push(min(st2.top(),val));
    }
    
    void pop() {
        st.pop();
        st2.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return st2.top();
    }
};
