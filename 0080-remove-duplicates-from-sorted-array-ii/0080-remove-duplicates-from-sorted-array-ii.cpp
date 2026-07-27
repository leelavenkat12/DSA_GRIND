class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<2) return nums.size();
        int writer = 2;
        for (int reader = 2; reader < nums.size(); reader++) {
            if (nums[reader] != nums[writer - 2]) {
              swap(nums[reader], nums[writer]);
                writer++;
            }
        }

        return writer;
    }
};