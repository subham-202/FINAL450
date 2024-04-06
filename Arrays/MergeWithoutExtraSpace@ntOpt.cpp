#include <iostream>
#include <algorithm> // For swap
using namespace std;

class Solution {
public:
    // Function to fix the order of elements in arr2.
    void fixArray(long long arr2[], int m) {
        for (int i = 1; i < m; i++) {
            if (arr2[i] < arr2[i - 1]) {
                swap(arr2[i], arr2[i - 1]);
            }
        }
    }

    // Function to merge the arrays arr1 and arr2.
    void merge(long long arr1[], long long arr2[], int n, int m) {
        long long i = 0;

        // Iterate through elements of arr1.
        while (i < n) {
            // If the current element in arr1 is greater than the first element in arr2,
            // swap them and fix the order of elements in arr2.
            if (arr1[i] > arr2[0]) {
                swap(arr1[i], arr2[0]);
                fixArray(arr2, m); // Fix the order of elements in arr2.
            }
            i++; // Move to the next element in arr1.
        }
    }
};

int main() {
    // Example usage of the Solution class.
    Solution solution;

    // Define arrays arr1 and arr2.
    long long arr1[] = {1, 3, 5, 7};
    long long arr2[] = {0, 2, 6, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]); // Calculate the size of arr1.
    int m = sizeof(arr2) / sizeof(arr2[0]); // Calculate the size of arr2.

    // Merge arr1 and arr2 using the merge function of the Solution class.
    solution.merge(arr1, arr2, n, m);

    // Output the merged array arr1.
    cout << "Merged array arr1: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Output the remaining elements in arr2.
    cout << "Remaining elements in arr2: ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
