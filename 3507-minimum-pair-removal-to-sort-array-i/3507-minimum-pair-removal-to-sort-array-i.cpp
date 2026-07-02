class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {

        int operations = 0;

        while (true) {

            bool sorted = true;

            int i = 0;
            while (i < nums.size() - 1) {
                if (nums[i] > nums[i + 1]) {
                    sorted = false;
                    break;
                }
                i++;
            }
            if (sorted) {
                return operations;
            }
            int idx = 0;
            i = 1;

            while (i < nums.size() - 1) {
                if (nums[i] + nums[i + 1] < nums[idx] + nums[idx + 1]) {
                    idx = i;
                }
                i++;
            }
            vector<int> temp;
            i = 0;
            while (i < nums.size()) {

                if (i == idx) {
                    temp.push_back(nums[i] + nums[i + 1]);
                    i += 2;
                }
                else {
                    temp.push_back(nums[i]);
                    i++;
                }
            }
            nums = temp;
            operations++;
        }
    }
};