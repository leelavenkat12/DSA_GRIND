#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<=n;i++){
            if(nums[i]-i!=0){
                return i;
            }
        }
        return -1;
    }
    
};
int main(){
    Solution sol;
    vector<int> nums={9,6,4,2,3,5,7,0,1};
    cout<<sol.missingNumber(nums);
    return 0;
}

