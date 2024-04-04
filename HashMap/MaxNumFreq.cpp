#include <vector>
#include <unordered_map>
#include <algorithm>
#include <iostream>

using namespace std;

int findMajorityElement(vector<int> &arr, int n) {
    unordered_map<int, int> count;
    int maxFreq = 0;
    int maxAns = 0;
    
    // Count the frequency of each element and update maxFreq
    for (int i = 0; i < arr.size(); i++) {
        count[arr[i]]++;
        maxFreq = max(maxFreq, count[arr[i]]);
    }

    // Find the element with the maximum frequency
    for (int i = 0; i < arr.size(); i++) {
        if (maxFreq == count[arr[i]]) {
            maxAns = arr[i];
            break;  // Once found, no need to continue the loop
        }
    }
    return maxAns;  // Return the element with the maximum frequency
}

int main() {
    int n = 7; // Example value for n
    int arr[n] = {1, 2, 2, 2, 3, 4, 2}; // Example array

    // Convert the raw array to a vector
    vector<int> vec(arr, arr + n);

    // Call the function with the vector
    int majorityElement = findMajorityElement(vec, n);

    // Output the result
    cout << "Majority Element: " << majorityElement << endl;

    return 0;
}
