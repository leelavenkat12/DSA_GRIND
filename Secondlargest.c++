#include <bits/stdc++.h>
using namespace std;

// Function to find second largest and second smallest
pair<int, int> SecondLargestAndSmallest(vector<int>& arr) {
    int n = arr.size();

    int largest = arr[0];
    int secondLargest = INT_MIN;

    int smallest = arr[0];
    int secondSmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        // Update largest and second largest
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }

        // Update smallest and second smallest
        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest && arr[i] != smallest) {
            secondSmallest = arr[i];
        }
    }

    return {secondLargest, secondSmallest};
}

int main() {
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    auto res1 = SecondLargestAndSmallest(arr1);
    auto res2 = SecondLargestAndSmallest(arr2);

    cout << "Array 1: Second Largest = " << res1.first << ", Second Smallest = " << res1.second << endl;
    cout << "Array 2: Second Largest = " << res2.first << ", Second Smallest = " << res2.second << endl;

    return 0;
}