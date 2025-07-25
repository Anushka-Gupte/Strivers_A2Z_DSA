/*
Definition of singly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
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

class Solution {
public:
    ListNode *sortList(ListNode *head) {
    if(head == nullptr || head -> next == nullptr) return head;
    ListNode* zeroHead = new ListNode(-1);
    ListNode* oneHead = new ListNode(-1);
    ListNode* twoHead = new ListNode(-1);
    ListNode* zero = zeroHead;
    ListNode* one = oneHead;
    ListNode* two = twoHead;
    ListNode* temp = head;
    while(temp != nullptr) {
        if(temp -> val == 0) {
            zero -> next = temp;
            zero = zero -> next;
        } else if(temp -> val == 1) {
            one -> next = temp;
            one = one -> next;
        } else {
            two -> next = temp;
            two = two -> next;
        }
        temp = temp -> next;
    }
    if(oneHead -> next != nullptr) {
        zero -> next = oneHead -> next;
    } else {
        zero -> next = twoHead -> next;
    }
    one -> next = twoHead -> next;
    two -> next = nullptr;

    ListNode* newHead = zeroHead -> next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return newHead;
    }
};