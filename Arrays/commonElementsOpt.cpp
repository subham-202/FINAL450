#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:    
    vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3) {
        // Frequency maps for each array
        unordered_map<int, int> m1, m2, m3;
        
        // Populate frequency maps for each array
        for(int i = 0; i < n1; i++)
            m1[A[i]]++;
        
        for(int j = 0; j < n2; j++)
            m2[B[j]]++;
        
        for(int k = 0; k < n3; k++)
            m3[C[k]]++;
        
        vector<int> v;
        
        // Find common elements among the three arrays in Array A
        for(int i = 0; i < n1; i++) {
            //Checking common elements present in Array A or not
            if(m1[A[i]] && m2[A[i]] && m3[A[i]]) {
                v.push_back(A[i]);
                // Update frequency to avoid duplicates
                m1[A[i]] = 0;
            }
        }

        return v;
    }
};

int main() {
    // Creating an instance of Solution class
    Solution solution;

    // Input arrays
    int A[] = {6, 5, 8};
    int B[] = {1, 5, 10, 20, 40, 80};
    int C[] = {6, 7, 20, 80, 100};
    int n1 = 3, n2 = 6, n3 = 5;

    // Finding common elements among arrays A, B, and C
    vector<int> common = solution.commonElements(A, B, C, n1, n2, n3);

    // Outputting common elements
    cout << "Common elements: ";
    for(int i = 0; i < common.size(); i++) {
        cout << common[i] << " ";
    }
    cout << endl;

    return 0;
}
