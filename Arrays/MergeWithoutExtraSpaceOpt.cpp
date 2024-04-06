//MergeWithoutExtraSpace
#include <iostream>
#include <algorithm> // For swap and sort
using namespace std;

class Solution {
public:
    // Function to merge the arrays.
    void merge(long long arr1[], long long arr2[], int n, int m) {
        int i = n - 1, j = 0;
        while (i >= 0 && j < m) {
            // Comparing last element from the first array and the first element from the second array,
            // swapping if required.
            if (arr1[i] > arr2[j])
                swap(arr1[i], arr2[j]);
            i--;
            j++;
        }
        // Sorting the arrays at the end.
        sort(arr1, arr1 + n);
        sort(arr2, arr2 + m);
    }
};

int main() {
    // Define arrays arr1 and arr2.
    long long arr1[] = {1, 3, 5, 7};
    long long arr2[] = {0, 2, 6, 8, 9};
    int n = sizeof(arr1) / sizeof(arr1[0]); // Calculate the size of arr1.
    int m = sizeof(arr2) / sizeof(arr2[0]); // Calculate the size of arr2.

    // Create an instance of the Solution class.
    Solution solution;

    // Merge arr1 and arr2 using the merge function of the Solution class.
    solution.merge(arr1, arr2, n, m);

    // Output the merged array arr1.
    cout << "Merged array arr1: ";
    for (int i = 0; i < n; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    // Output the merged array arr2.
    cout << "Merged array arr2: ";
    for (int i = 0; i < m; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
