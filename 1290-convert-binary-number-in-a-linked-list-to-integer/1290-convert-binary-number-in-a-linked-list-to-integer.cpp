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
    int getDecimalValue(ListNode* head) {
        // oka oka elemnt nii n-1 nunchi 2*i tho 
        // 1*2power i;
        ListNode * temp = head;
    vector<int>res;
        while(temp!=NULL){
            res.push_back(temp->val);
            temp = temp->next;
        }
        //converted
        int n=res.size();
        int ans = 0;
                for(int i=0;i<n;i++){
            ans = ans *2 + res[i];
        }
        return ans;
    }
};