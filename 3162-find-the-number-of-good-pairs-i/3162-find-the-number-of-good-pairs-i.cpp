class Solution {
public:
    int numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int,int>mp;
        int count = 0;
        for(int i = 0; i<nums1.size();i++){
            mp[nums1[i]]++;
        }
        for(int i = 0 ;i<nums2.size();i++){
            int pick = nums2[i];
            for(auto it : mp){
                if(it.first % (pick * k) == 0){
                    count+=it.second;
                }
            }
        }
        return count;
    }
};