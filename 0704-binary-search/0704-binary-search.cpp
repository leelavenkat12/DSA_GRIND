class Solution {
public:
int Bs(vector<int>&nums,int low , int high,int target){
    if(low>high){
        return -1;
    }
    int mid = low +(high - low)/2;
    if(nums[mid]==target){
        return mid;
    }
    if(nums[mid] < target){
        return Bs(nums,mid+1,high,target);
    }
    else{
        return Bs(nums,low,mid-1,target);
    }
};

    int search(vector<int>& nums, int target) {
        int ans = Bs(nums,0,nums.size()-1,target);
        return ans;
    }
};