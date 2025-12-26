class Stack {
public:
    int TOP = -1,c;
     int arr[MAX];
    Stack(int capacity) {
        c = capacity;
    }
    void push(int num) {
        if(TOP == c - 1) return;
        TOP++;
        arr[TOP] = num;
    }

    int pop() {
        if(TOP == -1) return -1;
        int ele;
        ele = arr[TOP];
        TOP--;
        return ele;
    }
    
    int top() {
       if(TOP == -1) return -1;
       return arr[TOP];
    }
    
    int isEmpty() {
        if(TOP == -1) return 1;
        else return 0;
    }
    
    int isFull() {
        if(TOP == c - 1) return 1;
        else return 0;
    }
    
};