#include <bits/stdc++.h>
using namespace std;

// Class to hold the solution logic
class Solution {
public:
    // Function to remove duplicates from sorted array in-place
    int removeDuplicates(vector<int>& nums) {

        int i=0,j=1;
        int n=nums.size();
        while(j<n){
            if(nums[i]==nums[j]){
                j++;
            }
            else{
                i++;
                swap(nums[i],nums[j]);
                j++;

            }
        }
        return i+1;
    }

};

int main() {
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    Solution sol;
    int k = sol.removeDuplicates(nums);

    cout << "Unique count = " << k << "\n";
    cout << "Array after removing duplicates: ";
    for (int x = 0; x < k; x++) {
        cout << nums[x] << " ";
    }
    cout << endl;
}
