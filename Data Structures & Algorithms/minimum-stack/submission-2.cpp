class MinStack {
public:
    stack<int> st;
    multiset<int> s;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        s.insert(val);
    }
    
    void pop() {
        auto it = s.find(st.top());
        if (it != s.end()) {
            s.erase(it); 
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return *s.begin();
    }
};
