struct Node {
    int k, val, cnt;
    Node* prev;
    Node* next;
    
    Node(int key, int value) {
        k = key;
        val = value;
        cnt = 1;
        prev = next = NULL;
    }
};
struct List {
    int size;
    Node* head;
    Node* tail;
    
    List() {
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }
    void insertAfterHead(Node* p) {
        Node* temp = head->next;
        head->next = p;
        p->next = temp;
        temp->prev = p;
        p->prev = head;
        size++;
    }
    Node* deleteNode(Node* p) {
        Node* front = p->next;
        Node* q = p->prev;
        if(q) q->next = front;
        if(front) front->prev = q;
        p->next = p->prev = NULL;
        size--;
        return p;
    }
};
class LFUCache {
public:
    map<int,Node*> keyNode;
    map<int,List*> freqList;
    int minFreq;
    int maxSize;
    int curSize;
    LFUCache(int capacity) {
        maxSize = capacity;
        minFreq = 0;
        curSize = 0;
    }
    void updateFreqList(Node* temp) {
        keyNode.erase(temp->k);
        if(freqList[temp->cnt]) freqList[temp->cnt]->deleteNode(temp);
        if(temp->cnt == minFreq && freqList[temp->cnt]->size == 0) {
            minFreq++;
        }
        
        List* newHigherFreqList = new List();
        if(freqList.find(temp->cnt + 1) != freqList.end()) {
            newHigherFreqList = freqList[temp->cnt + 1];
        }
        temp->cnt += 1;
        newHigherFreqList->insertAfterHead(temp);
        freqList[temp->cnt] = newHigherFreqList;
        keyNode[temp->k] = temp;
    }
    int get(int key) {
        if(keyNode.find(key) != keyNode.end()) {
            Node* temp = keyNode[key];
            int value = temp->val;
            updateFreqList(temp);
            return value;
        }
        else {
            return -1;
        }
    }
    
    void put(int key, int value) {
        if(maxSize == 0) {
            return;
        }
        if(keyNode.find(key) != keyNode.end()) {
            Node* temp =keyNode[key];
            temp->val = value;
            updateFreqList(temp);
        }
        else {
            if(curSize == maxSize) {
                List* list = freqList[minFreq];
                keyNode.erase(list->tail->prev->k);
                freqList[minFreq]->deleteNode(list->tail->prev);
                curSize--;
            }
            curSize++;
            minFreq = 1;
            List* listFreq = new List();
            if(freqList.find(minFreq) != freqList.end()) {
                listFreq = freqList[minFreq];
            }
            Node* node = new Node(key,value);
            listFreq->insertAfterHead(node);
            keyNode[key] = node;
            freqList[minFreq] = listFreq;
        }
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */