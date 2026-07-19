class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        sort(arr1.begin(), arr1.end());
        sort(arr2.begin(), arr2.end());
        int n = arr1.size();
        int m = arr2.size();
        int j = 0;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            while (j < m && arr2[j] < arr1[i] - d) {
                j++;
            }
            bool ok = true;
            if (j < m && abs(arr1[i] - arr2[j]) <= d)
                ok = false;

            if (j > 0 && abs(arr1[i] - arr2[j - 1]) <= d)
                ok = false;

            if (ok)
                ans++;
        }

        return ans;
    }
};