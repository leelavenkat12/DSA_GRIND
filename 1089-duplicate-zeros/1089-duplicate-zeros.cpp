class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();

        // Step 1: Count zeros
        int zeros = 0;
        for (int x : arr) {
            if (x == 0)
                zeros++;
        }

        // Step 2: Two pointers
        int left = n - 1;
        int right = n + zeros - 1; // virtual index

        // Step 3: Fill from back
        while (left >= 0) {

            if (right < n) {
                arr[right] = arr[left];
            }

            if (arr[left] == 0) {

                right--;

                if (right < n) {
                    arr[right] = 0;
                }

            }

            left--;
            right--;
        }
    }
};