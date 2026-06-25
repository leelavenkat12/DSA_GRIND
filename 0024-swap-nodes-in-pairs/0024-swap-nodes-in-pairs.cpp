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
    ListNode* swapPairs(ListNode* head) {
    ListNode* temp = head;
    vector<int>res;
    while(temp!=NULL){
        res.push_back(temp->val);
        temp = temp->next;
    }
    //converted
    int n = res.size();
    for(int i=0;i<n-1;i+=2){
        swap(res[i],res[i+1]);
    }
    if(res.size()==0){
        return NULL;
    }
   ListNode* newhead = new ListNode(res[0]);
ListNode* temp1 = newhead;
int j = 1;
while(j < res.size()){
    ListNode* newnode = new ListNode(res[j]);
    temp1->next = newnode;
    temp1 = temp1->next;
    j++;
}
return newhead;

    }
};