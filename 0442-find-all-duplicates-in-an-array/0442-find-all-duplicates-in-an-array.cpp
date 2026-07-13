class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
           unordered_map<int,int>mp;
        int n = nums.size();
        vector<int>res;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it: mp){
            if(it.second == 2){
                res.push_back(it.first);
                }
        }
return res;
    }
};