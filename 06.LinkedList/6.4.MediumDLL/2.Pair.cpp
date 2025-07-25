/*
class ListNode {
public:
    int val;
    ListNode* next;
    ListNode* prev; 

    ListNode(int value) : val(value), next(nullptr), prev(nullptr) {}

    ~ListNode() {
        delete next;
    }
};
*/

class Solution {
public:
    ListNode* findTail(ListNode* head) {
        ListNode* temp = head;
        while(temp -> next != nullptr) {
            temp = temp -> next;
        }
        return temp;
    }
    vector<vector<int>> findPairsWithGivenSum(ListNode* head, int target) {
        // Your code goes here
        ListNode* left = head;
        ListNode* right = findTail(head);
        vector<vector<int>> ans;
        while(left -> val < right -> val) {
            if(left -> val + right -> val == target) {
                ans.push_back({left -> val, right -> val});
                left = left -> next;
                right = right -> prev;
            }
            else if(left -> val + right -> val < target) {
                left = left -> next;
            }
            else {
                right = right -> prev;
            }
        }
        return ans;
    }
};