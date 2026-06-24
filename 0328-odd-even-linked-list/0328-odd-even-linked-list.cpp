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
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;
        vector<int>res;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp = temp->next;
        }
        //converted
        vector<int>ans;
      for(int i = 0; 2*i < res.size(); i++){
    ans.push_back(res[2*i]);
}
for(int i = 1; i < res.size(); i += 2){
    ans.push_back(res[i]);
}
if(ans.size()==0){
    return NULL;
}
ListNode* newhead = new ListNode(ans[0]);
ListNode* temp1= newhead;
int j=1;
while(j<ans.size()){
    ListNode* newnode = new ListNode(ans[j]);
    temp1->next = newnode;
    temp1= temp1->next;
    j++;

}
return newhead;
    }
};