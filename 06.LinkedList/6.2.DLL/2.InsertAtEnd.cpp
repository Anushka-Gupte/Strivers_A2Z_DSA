class Node {
public: 
    int data;
    Node* next;
    Node* back;
    
    Node(int val) {
        data = val;
        next = nullptr;
        back = nullptr;
    }
};
Node* insertAtTail(Node* head, int val) {
    if(head == nullptr) {
        Node* newNode = new Node(val);
        head = newNode;
        return head;
    }
    Node* temp = head;
    while(temp -> next != nullptr) {
        temp = temp -> next;
    }
    Node* newNode = new Node(val);
    temp -> next = newNode;
    newNode -> back = temp;
    return head;
}