class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL) return head;

        ListNode* temp = head;
        vector<int> res;

        while(temp != NULL){
            res.push_back(temp->val);
            temp = temp->next;
        }

        int n = res.size();
        k = k % n;

        if(k == 0) return head;

        vector<int> temp1;

        for(int i = n - k; i < n; i++){
            temp1.push_back(res[i]);
        }

        for(int i = 0; i < n - k; i++){
            temp1.push_back(res[i]);
        }

        ListNode* newhead = new ListNode(temp1[0]);
        ListNode* newtemp = newhead;

        for(int i = 1; i < n; i++){
            ListNode* newnode = new ListNode(temp1[i]);
            newtemp->next = newnode;
            newtemp = newnode;
        }

        return newhead;
    }
};