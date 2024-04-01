//UnionOfTwoArrays
#include <iostream>
#include <unordered_set>

using namespace std;

class Solution {
public:
    // Function to return the count of the number of elements in the union of two arrays.
    int doUnion(int a[], int n, int b[], int m) {
        unordered_set<int> set;
        for (int i = 0; i < n; i++) {
            set.insert(a[i]);
        }
        for (int i = 0; i < m; i++) {
            set.insert(b[i]);
        }
        return set.size();
    }
};

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int n = sizeof(a) / sizeof(a[0]); // Calculate the size of the first array
    
    int b[] = {3, 4, 5, 6, 7};
    int m = sizeof(b) / sizeof(b[0]); // Calculate the size of the second array
    
    Solution solution; // Create an instance of the Solution class
    
    // Call the doUnion method to find the count of elements in the union of two arrays
    int unionCount = solution.doUnion(a, n, b, m);
    
    // Print the count of elements in the union
    cout << "Count of elements in the union of two arrays: " << unionCount << endl;
    
    return 0;
}
