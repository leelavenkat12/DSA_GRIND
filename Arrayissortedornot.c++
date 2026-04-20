#include<bits/stdc++.h>
using namespace std;


bool SortArrayorNot(vector<int>& arr) {
    int n= arr.size();
 
    for(int i = 0; i < n-1; i++) {
        if(arr[i] > arr[i+1]) {  // check consecutive pair
            return false;       // not sorted
        }
    }
    return true;                // sorted
}


int main() {
    // Initialize arrays
    vector<int> arr1 = {1,2,3,4,5};
    vector<int> arr2 = {8, 10, 5, 7, 9};
   
    // Find and output the largest element in both arrays
    cout << "The Largest element in the array is: " << SortArrayorNot(arr1) << endl;
    cout << "The Largest element in the array is: " << SortArrayorNot(arr2);
   
    return 0;
}






