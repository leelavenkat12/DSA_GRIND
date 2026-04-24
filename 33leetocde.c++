// 33
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        map<int, int> mp;

        // store value -> index
        for(int i = 0; i < n; i++) {
            mp[nums[i]] = i;
        }

        // search
        if(mp.find(target) != mp.end()) {
            return mp[target];
        }

        return -1;
    }
};
int main() {
    vector<int> nums = {4, 3, 2, 3, 1};
    int target = 4;

    Solution sol;
    int result = sol.search(nums, target);

    cout << result << endl;

    return 0;
}