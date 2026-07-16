class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int right = 0;
        for(int i = 0; i < nums.size(); i++) {
            if(nums[i] != val) {
                swap(nums[right], nums[i]);
                right++;
            }
        }
        return right;
    }
};