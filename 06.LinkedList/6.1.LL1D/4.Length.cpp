class Node {
    public:
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = nullptr;
        }
};
int length(Node* head) {
        if(head == nullptr) return 0;
        int count = 0;
        Node* temp = head;
        while(temp != nullptr) {
            count++;
            temp = temp -> next;
        }
    return count;
}