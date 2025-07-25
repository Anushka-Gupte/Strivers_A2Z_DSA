/*
Definition of doubly linked list:
struct ListNode
{
    int val;
    ListNode *next;
    ListNode *prev;
    ListNode()
    {
        val = 0;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1)
    {
        val = data1;
        next = NULL;
        prev = NULL;
    }
    ListNode(int data1, ListNode *next1, ListNode *prev1)
    {
        val = data1;
        next = next1;
        prev = prev1;
    }
};
*/

class Solution {
public:
    ListNode * removeDuplicates(ListNode *head) {
        ListNode* temp = head;
        while(temp != nullptr && temp -> next != nullptr) {
            ListNode* nextNode = temp -> next;
            while(nextNode != nullptr && temp -> val == nextNode -> val) {
                ListNode* duplicate = nextNode;
                nextNode = nextNode -> next;
                delete duplicate;
            }
            temp -> next = nextNode;
            if(nextNode != nullptr) nextNode -> prev = temp;

            temp = temp -> next;
        }
        return head;
    }
};