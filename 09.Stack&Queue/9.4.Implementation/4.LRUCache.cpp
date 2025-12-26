class Node {
public:
    int k, val;
    Node* prev;
    Node* next;
    
    Node(int k1,int v) {
        k = k1;
        val = v;
        prev = next = NULL;
    }
};
class LRUCache {
public:
    int cap;
    map<int,Node*> mpp;
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    LRUCache(int capacity) {
        cap = capacity;
        mpp.clear();
        head->next = tail;
        tail->prev = head;
    }
     Node* deleteNode(Node* p,Node* head) {
        Node* front = p->next;
        Node* q = p->prev;
        if(q) q->next = front;
        if(front) front->prev = q;
        p->next = p->prev = NULL;
        return p;
    }
    void insertAfterHead(Node* p,Node* head) {
        Node* temp = head->next;
        head->next = p;
        p->next = temp;
        temp->prev = p;
        p->prev = head;
    }
    int get(int key) {
        if(mpp.find(key) == mpp.end()) return -1;
        Node* p  = mpp[key];
        int value = p->val;
        Node* q = deleteNode(p,head);
        insertAfterHead(q,head);
        return value;
    }
    
    void put(int key, int value) {
        if(mpp.find(key) == mpp.end()) {
            if(mpp.size() == cap) {
                Node* p = tail->prev;
                Node* q = deleteNode(p,head);
                mpp.erase(p->k);
            }
            Node* newNode = new Node(key,value);
            mpp[key] = newNode;
            insertAfterHead(newNode,head);
        }
        else {
            Node* p = mpp[key];
            p->val = value;
            Node* q = deleteNode(p,head);
            insertAfterHead(q,head);
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */