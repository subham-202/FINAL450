//CommonElemntsBruteForce
#include<iostream>
#include <vector>
using namespace std;

class BruteForceSolution {
public:    
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
        vector<int> commonElements;
        
        // Iterate through each element of array A
        for (int i = 0; i < n1; i++) {
            // Iterate through each element of array B
            for (int j = 0; j < n2; j++) {
                // Iterate through each element of array C
                for (int k = 0; k < n3; k++) {
                    // Check if A[i], B[j], and C[k] are equal
                    if (A[i] == B[j] && B[j] == C[k]) {
                        // Check if the common element is not a duplicate
                        if (commonElements.empty() || A[i] != commonElements.back())
                            commonElements.push_back(A[i]); // Add the common element to the vector
                        break; // Move to the next element of array A
                    }
                }
            }
        }
        
        return commonElements;
    }
};

int main() {
    // Example input
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    int n1 = 6, n2 = 5, n3 = 8;

    // Create an instance of the BruteForceSolution class
    BruteForceSolution solution;
    // Find common elements using the Brute Force approach
    vector<int> result = solution.commonElements(A, B, C, n1, n2, n3);

    // Output the common elements
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
