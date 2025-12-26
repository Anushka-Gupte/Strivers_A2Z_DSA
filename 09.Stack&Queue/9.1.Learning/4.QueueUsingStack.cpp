class Queue {
public:
    stack<int> s1,s2;
    
    void push(int ele) {
        s1.push(ele);
    }
    int pop() {
        if(!s2.empty()) {
            int ele = s2.top();
            s2.pop();
            return ele;
        }
        else {
            while(s1.size()) {
                s2.push(s1.top());
                s1.pop();
            }
            int ele = s2.top();
            s2.pop();
            return ele;
        }
    }
    int TOP() {
        if(!s2.empty()) return s2.top();
        else {
            while(s1.size()) {
                s2.push(s1.top());
                s1.pop();
            }
            return s2.top();
        }
    }
};