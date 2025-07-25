class Node {
    public:
        int data;
        Node* next;
        Node(int val) {
            data = val;
            next = nullptr;
        }
};
Node* convertArr2LL(vector<int> arr) {
    Node* head = nullptr;
    Node* tail = nullptr;
    for(int i=0;i<arr.size();i++) {
        Node* newNode = new Node(arr[i]);
        if(head == nullptr) {
            head = tail = newNode;
            } else {
                tail -> next = newNode;
                tail = newNode;
                }
    }
    return head;
}
        