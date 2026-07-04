class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int low = 0;
        int high = 0;
        int n = nums1.size();
        int m = nums2.size();
        vector<int> res;
        while (low < n && high < m) {
            if (nums1[low] == nums2[high]) {
                if (res.empty() || res.back() != nums1[low]) {
                    res.push_back(nums1[low]);
                }
                low++;
                high++;
            }
            else if (nums1[low] < nums2[high]) {
                low++;
            }
            else {
                high++;
            }
        }

        return res;
    }
};