//MinimumJumpToReachEnd
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to calculate the minimum number of jumps to reach the last index
    int jump(vector<int>& nums) {
        int jump = 0;
        int pos = 0;
        int des = 0;

        for (int i = 0; i < nums.size() - 1; i++) {
            des = max(des, nums[i] + i);
            if (pos == i) {
                pos = des;
                jump++;
            }
        }
        return jump;
    }
};

int main() {
    vector<int> nums = {2, 3, 1, 1, 4}; // Example vector
    Solution solution; // Create an instance of the Solution class

    // Call the jump method to calculate the minimum number of jumps
    int result = solution.jump(nums);

    // Print the result
    cout << "Minimum number of jumps required: " << result << endl;

    return 0;
}
