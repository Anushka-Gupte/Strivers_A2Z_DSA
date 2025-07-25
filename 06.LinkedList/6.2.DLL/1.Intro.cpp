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
Node* convertArr2DLL(vector<int> arr) {
    Node* head = nullptr;
    Node* prev = nullptr;
    for(int i=0;i<arr.size();i++) {
        Node* newNode = new Node(arr[i]);
        if(head == nullptr) {
            head = prev = newNode;
        }
        prev -> next = newNode;
        newNode -> back = prev;
        prev = newNode;
    }
    return head;
}