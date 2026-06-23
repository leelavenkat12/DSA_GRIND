class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        vector<int> array;
        ListNode* temp = head;
      while(temp != NULL) {
            array.push_back(temp->val);
            temp = temp->next;
        }
        unordered_map<int, int> mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]]++;
        }
        vector<int> ans;
        for(int i = 0; i < array.size(); i++) {
            if(mp.find(array[i]) == mp.end()) {
                ans.push_back(array[i]);
            }
        }
        if(ans.size() == 0) {
            return NULL;
        }
        ListNode* newHead = new ListNode(ans[0]);
        ListNode* temp1 = newHead;

        int i = 1;
        while(i < ans.size()) {
            ListNode* newnode = new ListNode(ans[i]);
            temp1->next = newnode;
            temp1 = temp1->next;
            i++;
        }

        return newHead;
    }
};