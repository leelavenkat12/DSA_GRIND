// // Given an array nums of size n, return the majority element.

// The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        map<int,int>freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        for(auto it:freq){
            if(it.second >n/2){
                return it.first;
            }
        }
        return -1;
    }
};

int main() {
    vector<int> nums = {4,2,2,4,4};

    Solution sol;
    int result = sol.majorityElement(nums);

    cout << result;
}