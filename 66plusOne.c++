
// 66. Plus One

// You are given a large integer represented as an integer array digits, where each digits[i] is
//  the ith digit of the integer. The digits are ordered from most significant to
//  least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

#include<bits/stdc++.h>
using namespace std;


class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
      int n = digits.size();
      for(int i=n-1;i>=0;i--){
        if(digits[i]<9){
            digits[i]++;
            return digits;
        }
        digits[i]=0;//this is when last digit =9

      }  

      digits.insert(digits.begin(),1);
      return digits;
    }
};
int main() {
    vector<int> digits = {4,3,2,3,1};

    Solution sol;
    vector<int> result = sol.plusOne(digits);

    for(int x : result) {
        cout << x << " ";
    }
}