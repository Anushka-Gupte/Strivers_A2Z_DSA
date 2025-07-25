/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findKthNode(ListNode* temp, int k) {
        k -= 1;
        while(temp != nullptr && k>0) {
            k--;
            temp = temp -> next;
        }
        return temp;
    }
    ListNode* reverseLL(ListNode* head) {
        if(head == nullptr || head -> next == nullptr) return head;
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* nextNode;
        while(temp != nullptr) {
            nextNode = temp -> next;
            temp -> next = prev;
            prev = temp;
            temp = nextNode;
        }
        return prev;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* prevLast = nullptr;
        while(temp != nullptr) {
            ListNode* kthNode = findKthNode(temp,k);
            if(kthNode == nullptr) {
                if(prevLast) prevLast -> next = temp;
                break;
            }
        ListNode* nextNode = kthNode -> next;
        kthNode -> next = nullptr;
        reverseLL(temp);
        if(temp == head) {
            head = kthNode;
        }
        else {
            prevLast -> next = kthNode;
        }

        prevLast = temp;
        temp = nextNode;
        }
    return head;
    }
};