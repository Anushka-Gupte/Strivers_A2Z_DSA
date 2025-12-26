class Node{
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
    }
};
class Stack {
public:
    Node* TOP = NULL;
    int size = 0;
    
    void push(int ele) {
        Node* n = new Node(ele);
        n -> next = TOP;
        TOP = n;
        size++;
    }
    int pop() {
        if(TOP == NULL) return -1;
        Node* temp = TOP;
        TOP = TOP -> next;
        int ele = temp -> data;
        delete temp;
        size--;
        return ele;
    }
    int top() {
        if(TOP == NULL) return -1;
        return TOP -> data;
    }
    int isEmpty() {
        if(TOP == NULL) return 1;
        else return 0;
    }
    int getSize() {
        return size;
    }
};