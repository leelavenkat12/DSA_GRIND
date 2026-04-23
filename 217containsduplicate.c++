// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
#include<bits/stdc++.h>
using namespace std;
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
int main() {
    vector<int> nums = {4,2,2,4,4};

    Solution sol;
    int result = sol.containsDuplicate(nums);

    cout << result;
}