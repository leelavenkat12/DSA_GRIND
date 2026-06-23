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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* temp = head;
        vector<int>convert;
        while(temp!=NULL){
            convert.push_back(temp->val);
            temp = temp->next;

        }
        while(left<right){
            swap(convert[left-1],convert[right-1]);
            left++;
            right--;
        }
        int i =1;

        ListNode* newHead = new ListNode(convert[0]);
        ListNode* temp1 = newHead;
        while(i<convert.size()){
            ListNode* newnode = new ListNode(convert[i]);
            i++;
            temp1->next = newnode;
            temp1=temp1->next;
        }
        return newHead;
    }

};