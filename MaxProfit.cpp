// MaxProfit
#include <iostream>
#include <vector>
#include <algorithm>
#include<limits.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit = INT_MIN;
        int n = prices.size(); // Added missing declaration of n
        for (int i = 0; i < n - 1; i++) { // Corrected loop range
            if (prices[i] < prices[i + 1]) {
                maxProfit = max(maxProfit, prices[i + 1] - prices[i]);
            }
        }
        return maxProfit;
    }
};

int main() {
    vector<int> prices = {7, 1, 5, 3, 6, 4}; // Example prices
    Solution solution; // Create an instance of the Solution class

    // Call the maxProfit method to calculate the maximum profit
    int maxProfit = solution.maxProfit(prices);

    // Print the result
    cout << "Maximum profit: " << maxProfit << endl;

    return 0;
}
