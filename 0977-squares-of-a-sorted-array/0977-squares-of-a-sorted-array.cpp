class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int>newnums;
        int ans = 0;
        for(int i = 0; i< nums.size();i++){
            int pick = nums[i];
            ans = pick * pick ;
            newnums.push_back(ans);

        }
        sort(newnums.begin(),newnums.end());
        return newnums;
    }
};