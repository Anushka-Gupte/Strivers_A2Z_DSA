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
Node* deleteLastNode(Node* head) {
    if(head == nullptr) {
        return head;
    }
    if(head -> next == nullptr) {
       return nullptr;
    }
    Node* temp = head;
    while(temp -> next != nullptr) {
        temp = temp -> next;
    }
    Node* prev = temp -> back;
    temp -> back = nullptr;
    prev -> next = nullptr;
    delete temp;
    return head;
}