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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int>res;
        ListNode* temp = head;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp = temp->next;
        } 
        vector<int>ans;  
        // converted
        for(int i=0;i<res.size();i++){
            if(res[i]!=val){
                ans.push_back(res[i]);
            }

        }
        if(ans.size() == 0){
    return NULL;
}
       int j = 1;
ListNode* newHead = new ListNode(ans[0]);
ListNode* temp1 = newHead;
while(j < ans.size()) {
    ListNode* newnode = new ListNode(ans[j]);
    temp1->next = newnode;
    temp1 = temp1->next;
    j++;
}
        return newHead;
    }
};