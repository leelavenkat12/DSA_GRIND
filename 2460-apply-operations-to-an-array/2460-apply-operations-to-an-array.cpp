class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int left = 0;
        int right = 1;
        while(left <nums.size() && right < nums.size()){
            if(nums[left]==nums[right]){
                nums[left] = nums[left]+nums[right];
                nums[right] =  0;
                left++;
                right++;
            }
            else{

                left++;
                right++;
            }
        }
           int writer = 0;
        for(int reader = 0; reader < nums.size(); reader++) {
            if(nums[reader] != 0) {
                swap(nums[reader], nums[writer]);
                writer++;
            }
        }
        return nums;

    }
};