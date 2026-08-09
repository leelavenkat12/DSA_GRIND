class Solution {
public:
    string largestOddNumber(string num) {
        int lastOdd = -1;
        int i = 0;
        for (char ch : num) {
            if ((ch - '0') % 2 == 1) {
                lastOdd = i;
            }
            i++;
        }
        string ans = "";
        for (int j = 0; j <= lastOdd; j++) {
            ans += num[j];
        }
        return ans;
    }
};