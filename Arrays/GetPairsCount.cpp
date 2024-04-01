// GetPairsCount

#include <iostream>
#include <unordered_map>

using namespace std;

class Solution {
public:
    // Function to count pairs with given sum in the array
    int getPairsCount(int arr[], int n, int k) {
        int count = 0;
        unordered_map<int, int> freqMap;
        for (int i = 0; i < n; i++) {
            int compliment = k - arr[i];
            if (freqMap.find(compliment) != freqMap.end()) {
                count += freqMap[compliment];
            }
            freqMap[arr[i]] = freqMap[arr[i]] + 1;
        }
        return count;
    }
};

int main() {
    int arr[] = {1, 5, 7, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 6;

    Solution solution;
    int pairsCount = solution.getPairsCount(arr, n, k);

    cout << "Number of pairs with sum " << k << ": " << pairsCount << endl;

    return 0;
}
