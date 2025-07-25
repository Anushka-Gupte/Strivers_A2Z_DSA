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
Node* reverseDLL(Node* head) {
    if(head == nullptr || head -> next == nullptr) {
        return head;
    }
    Node* curr = head;
    Node* prev = nullptr;
    while(curr != nullptr) {
        prev = curr -> back;
        curr -> back = curr -> next;
        curr -> next = prev;
        
        curr = curr -> back;
    }
    return prev -> back;
}