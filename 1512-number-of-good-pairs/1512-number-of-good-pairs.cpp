class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int>mp;
        int frequency=0;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                frequency+=mp[nums[i]];
        }
                mp[nums[i]]++;
            }
        return frequency;
    }
};