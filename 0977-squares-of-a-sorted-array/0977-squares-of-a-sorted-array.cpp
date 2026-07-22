class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0;
        int n = nums.size();
        int index = n - 1;
        int right = n - 1;
        vector<int> ans(n);
        while (left <= right) {
            if (abs(nums[left]) < abs(nums[right])) {
                ans[index] = nums[right] * nums[right];
                right--;
            } else {
                ans[index] = nums[left] * nums[left];
                left++;
            }
            index--;
        }

        return ans;
    }
};