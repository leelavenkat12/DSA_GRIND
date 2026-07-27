class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int writer = 0;
        for(int reader = 0;reader<nums.size();reader++){
            if(nums[reader]!=nums[writer]){
            writer++;
                swap(nums[reader],nums[writer]);
            }
        }
        return writer+1;
    }
};