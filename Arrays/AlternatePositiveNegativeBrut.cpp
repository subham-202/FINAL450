#include <iostream>
using namespace std;

class Solution {
public:
    void rearrange(int arr[], int n) {
        int neg[n], pos[n];
        int j = 0, k = 0;

        // Separate negative and positive numbers
        for (int i = 0; i < n; i++) {
            if (arr[i] < 0)
                neg[j++] = arr[i];
            else
                pos[k++] = arr[i];
        }

        // Merge negative and positive arrays back into original array
        int i = 0, p = 0, q = 0;
        while (p < j && q < k) {
            arr[i++] = neg[p++];
            arr[i++] = pos[q++];
        }

        // Copy remaining elements from negative array
        while (p < j)
            arr[i++] = neg[p++];

        // Copy remaining elements from positive array
        while (q < k)
            arr[i++] = pos[q++];
    }
};

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    Solution solution;
    solution.rearrange(arr, n);

    cout << "Array after rearrangement: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
