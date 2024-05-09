#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

// Function to check if array a2 is a subset of array a1
string isSubset(int a1[], int a2[], int n, int m) {
    // If size of a2 is greater than size of a1, a2 cannot be a subset of a1
    if (n < m)
        return "No";
    // Create a map to store the frequency of elements in a1
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[a1[i]]++;
    }
    
    // Check if each element of a2 is present in a1 and its frequency is sufficient
    int count = 0;
    for (int i = 0; i < m; i++) {
        if (mp[a2[i]]) {
            count++;
            mp[a2[i]]--;
        }
    }
    
    // If all elements of a2 are found in a1, return "Yes", otherwise return "No"
    if (count != m)
        return "No";
    return "Yes";
}

int main() {
    // Title of the program
    cout << "**** Subset Checker ****" << endl << endl;

    // Example Input
    int a1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int a2[] = {1, 2, 3};
    int n = sizeof(a1) / sizeof(a1[0]); // Size of a1
    int m = sizeof(a2) / sizeof(a2[0]); // Size of a2
    // Call the isSubset function and print the result
    string result = isSubset(a1, a2, n, m);
    cout << "Output: " << result << endl;
    cout << "Explanation: ";
    if (result == "Yes")
        cout << "a2[] is a subset of a1[]";
    else
        cout << "a2[] is not a subset of a1[]";
    cout << endl;

    return 0;
}
