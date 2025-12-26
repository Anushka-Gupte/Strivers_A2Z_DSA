class MinStack {
public:
    stack<long long> st;
    long long mini = LONG_LONG_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        if(st.empty()) {
            mini = val;
            st.push(val);
        }
        else {
            if(val < mini) {
                st.push(1LL*2*val - mini);
                mini = val;
            }
            else {
                st.push(val);
            }
        }
    }
    
    void pop() {
        long long ele = st.top();
        st.pop();
        if(ele < mini) {
            mini = 2*mini - ele;
        }
    }
    
    int top() {
        long long ele = st.top();
        if(ele < mini) {
            return int(mini);
        }
        else {
            return int(ele);
       }
    }
    
    int getMin() {
        return int(mini);
    }
};