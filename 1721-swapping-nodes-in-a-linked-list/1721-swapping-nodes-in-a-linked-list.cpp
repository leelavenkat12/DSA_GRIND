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
    ListNode* swapNodes(ListNode* head, int k) {
       ListNode* temp = head;
    int cnt = 0;
    while(temp != NULL){
    cnt++;
    temp = temp->next;
}
    int n = cnt;
    cnt = k;
    int number = n - k + 1;
    ListNode* node1 = NULL;
    ListNode* node2 = NULL;
    temp = head;
    int index = 1;
    while(temp!=NULL){
        if(index==cnt){
            node1 = temp;
        }
        if(index==number){
            node2 = temp;
        }
        index++;
        temp = temp->next;
    }
    swap(node1->val, node2->val);
    return head;
    }
};