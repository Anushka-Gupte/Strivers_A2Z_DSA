class Node{
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
    }
};
class Queue {
public:
    Node* front = NULL;
    Node* rear = NULL;
    int size = 0;
    
    void enqueue(int ele) {
        Node* n = new Node(ele);
        if(front == NULL) {
            front = rear = n;
        }
        else {
            rear -> next = n;
            rear = rear -> next;
        }
        size++;
    }
    int dequeue() {
        if(front == NULL) return -1;
        int ele = front -> data;
        Node* temp = front;
        front = front -> next;
        delete temp;
        size--;
        return ele;
    }
    int peek() {
        if(front == NULL) return -1;
        return front -> data;
    }
    int isEmpty() {
        if(front == NULL) return 1;
        else return 0;
    }
    int getSize() {
        return size;
    }
};