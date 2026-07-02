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
    ListNode* insertionSortList(ListNode* head) {
        vector<int>res;
        ListNode* temp = head;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp = temp->next;
        }
        sort(res.begin(),res.end());
        if(res.size()==NULL){
            return nullptr;
        } 
        ListNode* head1 = new ListNode(res[0]);
ListNode* temp1 = head1;
int j = 1;
while(j < res.size()){
    ListNode* newnode = new ListNode(res[j]);
    temp1->next = newnode;
    temp1 = temp1->next;
    j++;
}
return head1;
           }
};