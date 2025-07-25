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
    ListNode * deleteAllOccurrences(ListNode* head, int target) {
        ListNode* temp = head;
        while(temp != nullptr) {
            if(temp -> val == target) {

                if(temp == head) {
                    head = head -> next;
                }

                ListNode* nextNode = temp -> next;
                ListNode* prevNode = temp -> prev;
                if(nextNode != nullptr) nextNode -> prev = prevNode;
                if(prevNode != nullptr) prevNode -> next = nextNode;

                delete temp;
                temp = nextNode;
            }
            else {
                temp = temp -> next;
            }
        }
        return head;
    }
};