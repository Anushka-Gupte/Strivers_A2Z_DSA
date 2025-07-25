/*
Definition of special linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *child;
    ListNode()
    {
        val = 0;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        child = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode* next2)
    {
        val = data1;
        next = next1;
        child = next1;
    }
};
*/

class Solution {
public:
    ListNode* merge(ListNode* l1, ListNode* l2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* res = dummyNode;
        ListNode* t1 = l1;
        ListNode* t2 = l2;
        while(t1!= nullptr && t2!= nullptr) {
            if(t1 -> val < t2 -> val) {
                res -> child = t1;
                res = t1;
                t1 = t1 -> child;
            } else {
                res -> child = t2;
                res = t2;
                t2 = t2 -> child;
            }
            res -> next = nullptr;
        }
        if(t1) res -> child = t1;
        else res -> child = t2;
        return dummyNode -> child;
    }
    ListNode* flattenLinkedList(ListNode* &head) {
        if(head == nullptr || head -> next == nullptr) {
            return head;
        }
        ListNode* mergedHead = flattenLinkedList(head -> next);
        head = merge(head, mergedHead);
        return head;
    }
};