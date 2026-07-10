class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n = nums.size();
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second>=2){
                return true;
            }
        }
        return false;
    }
};
// time complexity :map(logn)+o(n) for iterating
// space complexity:o(n) to solve this problem;