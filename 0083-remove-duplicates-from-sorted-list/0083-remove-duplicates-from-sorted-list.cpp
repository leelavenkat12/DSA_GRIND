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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp = head;
    vector<int>res;
    while(temp!=nullptr){
        res.push_back(temp->val);
        temp = temp->next;

    }
    //converted
    int n = res.size();
    vector<int>ans;
  unordered_map<int,int> mpp;
   for(int i = 0; i < n; i++) {
    if(mpp.find(res[i]) == mpp.end()) {
        ans.push_back(res[i]);
    }
    mpp[res[i]]=i;
}
if(ans.size()==NULL){
    return NULL;
}
   ListNode* newhead = new ListNode(ans[0]);
ListNode* temp1 = newhead;
int j = 1;
while(j < ans.size()) {
    ListNode* newnode = new ListNode(ans[j]);
    temp1->next = newnode;
    temp1 = temp1->next;
    j++;
}
    return newhead;
    }
};