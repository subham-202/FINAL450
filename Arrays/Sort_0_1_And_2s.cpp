//Q4 Sort 0s 1s and 2s
#include <iostream>
using namespace std;

class Solution {
public:
    // Function to sort an array of 0s, 1s, and 2s
    void sort012(int a[], int n) {
        // Initializing counts for 0s, 1s, and 2s
        int zero = 0, one = 0, two = 0;

        // Counting occurrences of 0s, 1s, and 2s
        for (int i = 0; i < n; i++) {
            if (a[i] == 0)
                zero++;
            else if (a[i] == 1)
                one++;
            else if (a[i] == 2)
                two++;
        }

        // Placing 0s, 1s, and 2s in the array
        int i = 0;
        // First, placing 0s
        while (zero > 0) {
            a[i++] = 0;
            zero--;
        }
        // Then, placing 1s
        while (one > 0) {
            a[i++] = 1;
            one--;
        }
        // Finally, placing 2s
        while (two > 0) {
            a[i++] = 2;
            two--;
        }
    }
};

int main() {
    int a[] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the array
    
    Solution solution; // Create an instance of the Solution class
    
    // Call the sort012 method to sort the array
    solution.sort012(a, n);
    
    // Print the sorted array
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    
    return 0;
}
