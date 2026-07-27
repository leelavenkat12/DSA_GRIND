class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int writer = 0 ;
        for(int reader = 0 ; reader<nums.size();reader++){
            if(nums[reader]!=0){
                swap(nums[reader],nums[writer]);
                writer++;
            }
        }
    }
};