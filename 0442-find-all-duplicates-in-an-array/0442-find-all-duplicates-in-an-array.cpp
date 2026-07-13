class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>mp;
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            if(mp.find(nums[i])!=mp.end()){
                if(mp[nums[i]]==1){ 
                    res.push_back(nums[i]);
                }
            }
            mp[nums[i]]++;
        }
        return res;
    }
};