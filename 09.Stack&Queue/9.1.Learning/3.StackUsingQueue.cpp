class Stack {
public:
    queue<int> q;
    
    void push(int ele) {
        int s = q.size();
        q.push(ele);
        for(int i=1;i<size();i++) {
            q.push(q.front());
            q.pop();
        }
    }
    void pop() {
        q.pop();
    }
    int top() {
        return q.front();
    }
    int size() {
        return q.size();
    }
};