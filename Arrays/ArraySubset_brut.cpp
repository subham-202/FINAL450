#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) {
    sort(a1, a1 + m); // Sorting a1 array
    sort(a2, a2 + n); // Sorting a2 array

    for (int i = 0; i < n; i++) {
        int j;
        for (j = 0; j < m; j++) {
            if (a2[i] == a1[j])
                break; // If a match is found, break the inner loop
        }
        if (j == m) // If no match was found in a1 for a2[i]
            return "No";
    }
    return "Yes";
}

int main() {
    int a1[] = {11, 7, 1, 13, 21, 3, 7, 3};
    int a2[] = {11, 3, 7, 1, 7};
    int n = sizeof(a2) / sizeof(a2[0]); // Size of a2
    int m = sizeof(a1) / sizeof(a1[0]); // Size of a1

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
