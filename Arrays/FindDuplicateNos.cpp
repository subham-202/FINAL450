//FindDuplicateNos
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Function to find the duplicate number in the given vector
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1])
                return nums[i];
        }
        return -1; // If no duplicate is found
    }
};

int main() {
    vector<int> nums = {1, 3, 4, 2, 2}; // Example vector
    Solution solution; // Create an instance of the Solution class

    // Call the findDuplicate method to find the duplicate number
    int result = solution.findDuplicate(nums);

    // Print the result
    cout << "Duplicate number: " << result << endl;

    return 0;
}
