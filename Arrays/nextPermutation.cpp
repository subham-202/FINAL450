//nextPermutation
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Function to find the next lexicographically greater permutation of a sequence of numbers
    void nextPermutation(vector<int>& nums) {
        int n, i, j;
        n = nums.size();
        
        // Find the first element from the right which is smaller than its right neighbor
        for (i = n - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                break;
            }
        }
        
        // If no such element exists, reverse the entire sequence
        if (i < 0) {
            reverse(nums.begin(), nums.end());
        } else {
            // Find the smallest element to the right of nums[i] which is greater than nums[i]
            for (j = n - 1; j > i; j--) {
                if (nums[j] > nums[i]) {
                    break;
                }
            }
            
            // Swap nums[i] with the smallest element greater than nums[i]
            swap(nums[i], nums[j]);
            
            // Reverse the sequence from i + 1 to the end
            reverse(nums.begin() + i + 1, nums.end());
        }
    }
};

int main() {
    vector<int> nums = {1, 2, 3}; // Example vector
    Solution solution; // Create an instance of the Solution class

    // Call the nextPermutation method to find the next lexicographically greater permutation
    solution.nextPermutation(nums);

    // Print the result
    cout << "Next permutation: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
