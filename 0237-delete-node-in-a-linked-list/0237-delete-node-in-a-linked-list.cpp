/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        // 4 1 1 9
        ListNode* temp = node;
        //4 1 1 9
        // temp =1
        temp = temp->next;
        // temp = 1 second one;
        node ->next = node->next->next;
        delete temp;

    }
};