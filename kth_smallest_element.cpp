//Q3 Kth Smallest Element
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Function to find the kth smallest element in the given array
    int kthSmallest(int arr[], int l, int r, int k) {
        // Sorting the array using STL sort function
        sort(arr + l, arr + r + 1);
        
        // Returning the kth smallest element
        return arr[l + k - 1];
    }
};

int main() {
    int arr[] = {12, 3, 5, 7, 19};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 2; // Find the 2nd smallest element
    
    Solution solution; // Create an instance of the Solution class
    
    // Call the kthSmallest method and store the result
    int kthSmallestElement = solution.kthSmallest(arr, 0, n - 1, k);
    
    // Print the result
    cout << "The " << k << "th smallest element is: " << kthSmallestElement << endl;
    
    return 0;
}
