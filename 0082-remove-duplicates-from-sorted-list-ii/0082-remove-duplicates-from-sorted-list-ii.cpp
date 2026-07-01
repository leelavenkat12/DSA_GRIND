class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {

        unordered_map<int,int> mp;
        vector<int> v;
        ListNode* temp = head;
        while(temp != NULL){
            mp[temp->val]++;
            temp = temp->next;
        }
       temp = head;
        while(temp != NULL){
            if(mp[temp->val] == 1){
                v.push_back(temp->val);
            }
            temp = temp->next;
        }
        if(v.size() == 0) return NULL;

        ListNode* head1 = new ListNode(v[0]);
        ListNode* temp1 = head1;
        int i = 1;
        while(i < v.size()){
            temp1->next = new ListNode(v[i]);
            temp1 = temp1->next;
            i++;
        }
        return head1;
    }
};