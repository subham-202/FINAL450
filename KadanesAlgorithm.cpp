//Kadane's Algorithm
#include <iostream>
#include <algorithm>
using namespace std;

// Function to find the maximum sum of a subarray using Kadane's algorithm
long long maxSubarraySum(int arr[], int n) {
    long long max_global = arr[0];
    long long max_current = arr[0];
    for (int i = 1; i < n; i++) {
        max_current = max((long long)arr[i], max_current + arr[i]);
        max_global = max(max_current, max_global);
    }
    return max_global;
}

int main() {
    int arr[] = {-2, -3, 4, -1, -2, 1, 5, -3}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the maxSubarraySum function to find the maximum subarray sum
    long long result = maxSubarraySum(arr, n);

    // Print the result
    cout << "Maximum subarray sum: " << result << endl;

    return 0;
}
