/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
    }
    ListNode(int data1, ListNode *next1)
    {
        val = data1;
        next = next1;
    }
};
*/
bool searchKey(ListNode* head, int key) {
        cout<<boolalpha;
        if(head == nullptr) return false;
        
        ListNode* temp = head;
        while(temp != nullptr) {
            if(temp -> val == key) return true;
            temp = temp -> next;
        }
    return false;
}