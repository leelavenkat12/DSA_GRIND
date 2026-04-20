// #include<bits/stdc++.h>
// using namespace std;

// // Function to sort the array and return the largest element
// int sortArr(vector<int>& arr) {
//     // Sort the array in ascending order
//     sort(arr.begin(), arr.end());
    
//     // Return the last element (largest element) after sorting
//     return arr[arr.size() - 1];
// }

// int main() {
//     // Initialize arrays
//     vector<int> arr1 = {2, 5, 1, 3, 0};
//     vector<int> arr2 = {8, 10, 5, 7, 9};
   
//     // Find and output the largest element in both arrays
//     cout << "The Largest element in the array is: " << sortArr(arr1) << endl;
//     cout << "The Largest element in the array is: " << sortArr(arr2);
   
//     return 0;
// }







#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 1, 3, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int largest = arr[0];

    for(int i = 0; i < n-1; i++) {      // stop at n-2 to safely use arr[i+1]
        if(arr[i] < arr[i+1]) {         // if current is smaller than next
            largest = arr[i+1];         // update largest to next element
        }
    }

    cout << "Largest element is: " << largest << endl;
    return 0;
}