#include <iostream>
using namespace std;
//Brute Force...
class Solution {
public:
    int getPairsCount(int arr[], int n, int k) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] + arr[j] == k) {
                    count++;
                }
            }
        }
        return count;
    }
};
//Optimised Sollution..
int main() {
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the target sum: ";
    cin >> k;

    Solution s;
    int pairsCount = s.getPairsCount(arr, n, k);
    cout << "Number of pairs with sum " << k << " is: " << pairsCount << endl;

    return 0;
}
