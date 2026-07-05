class Solution {
public:
  int LastOccuurence(vector<int>& arr, int target) {
        int low = 0, high = arr.size() - 1;
        int ans = -1;

        while(low <= high) {
            int mid = (low + high) / 2;

            if(arr[mid] == target) {
                ans = mid;
                low = mid + 1;
            }
            else if(arr[mid] > target) {
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        }

        return ans;
    }


    int Firstoccurence(vector<int>& nums, int target){
        int n = nums.size();
        int low = 0, high = n - 1;
        int ans = -1;

        while(low <= high){
            int mid = (low + high) / 2;
if(nums[mid]==target){
    ans = mid;
    high = mid-1;
}
else if(nums[mid]>target){
   high = mid-1;
}
else{
    low = mid+1;
}
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = Firstoccurence(nums,target);
        int last = LastOccuurence(nums,target);
        return {first,last};
    }
};