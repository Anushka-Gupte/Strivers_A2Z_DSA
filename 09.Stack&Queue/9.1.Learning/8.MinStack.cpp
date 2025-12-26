class MinStack {
public:
    stack<int> st;
    int mini = INT_MAX;
    
    void push(int ele) {
        if(st.empty()) {
            mini = ele;
            st.push(ele);
        }
        else {
            if(ele < mini) {
                st.push(2*ele - mini);
                mini = ele;
            }
            else {
                st.push(ele);
            }
        }
    }
    int pop() {
        int ele = st.top();
        st.pop();
        if(ele < mini) {
            int num = mini;
            mini = 2*mini - ele;
            return num;
        }
        else {
            return ele;
        }
    }
    int top() {
        int ele = st.top();
        if(ele < mini) {
            return mini;
        }
        else {
            return ele;
       }
    }
    int getMin() {
        return mini;
    }
};