//MinimiseTheHeights
#include <iostream>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Function to get the minimum difference between the heights of the shortest and the longest tower after modification
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr + n);
        int min_tower = arr[0] + k;
        int maxi_tower = arr[n - 1] - k;
        int mini, maxi;
        int ans = arr[n - 1] - arr[0];
        for (int i = 0; i < n - 1; i++) {
            mini = min(arr[i + 1] - k, min_tower);
            maxi = max(arr[i] + k, maxi_tower);
            if (mini < 0) {
                continue;
            }
            ans = min(ans, (maxi - mini));
        }
        return ans;
    }
};

int main() {
    int arr[] = {1, 5, 8, 10}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array
    int k = 2; // Example value of k

    Solution solution; // Create an instance of the Solution class

    // Call the getMinDiff method to get the minimum difference between tower heights
    int result = solution.getMinDiff(arr, n, k);

    // Print the result
    cout << "Minimum difference between tower heights after modification: " << result << endl;

    return 0;
}
