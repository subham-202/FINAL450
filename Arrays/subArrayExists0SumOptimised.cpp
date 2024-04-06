#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n) {
        unordered_map<int,int> mpp;
        int currentSum = 0;
        for(int i = 0; i < n; i++) {
            currentSum += arr[i];
            if(currentSum == 0 || mpp.find(currentSum) != mpp.end()) {
                return true;
            }
            mpp[currentSum] = i;
        }
        return false;
    }
};

int main() {
    int arr[] = {4, 2, -3, 1, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    Solution solution; // Creating an object of Solution class
    cout << boolalpha << solution.subArrayExists(arr, n) << endl; // Output: true
    return 0;
}
