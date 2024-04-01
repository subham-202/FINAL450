//MergeWithoutExtraSpace
#include <iostream>
using namespace std;

class Solution {
public:
    // Function to merge two sorted arrays
    void merge(long long arr1[], long long arr2[], int n, int m) {
        long long i = n - 1;
        long long j = m - 1;
        long long k = m + n - 1;
        while (i >= 0 && j >= 0) {
            if (arr1[i] > arr2[j]) {
                arr1[k--] = arr1[i--];
            } else {
                arr1[k--] = arr2[j--];
            }
        }
        while (j >= 0) {
            arr1[k--] = arr2[j--];
        }
    }
};

int main() {
    long long arr1[] = {1, 3, 5, 7}; // First sorted array
    long long arr2[] = {2, 4, 6, 8}; // Second sorted array
    int n = sizeof(arr1) / sizeof(arr1[0]); // Size of the first array
    int m = sizeof(arr2) / sizeof(arr2[0]); // Size of the second array

    Solution solution; // Create an instance of the Solution class

    // Call the merge method to merge the two arrays
    solution.merge(arr1, arr2, n, m);

    // Print the merged array
    cout << "Merged array: ";
    for (int i = 0; i < n + m; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    return 0;
}
