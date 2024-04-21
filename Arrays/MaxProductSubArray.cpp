//Maximum Product Subarray
#include <vector>
#include <algorithm>
#include<iostream>
using namespace std;

class Solution {
public:
    long long maxProduct(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        long long maxProd = nums[0];
        long long minProd = nums[0];
        long long result = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] < 0) {
                swap(maxProd, minProd);
                //If we encountered -ve swap to make it positive as -ve *-ve is +ve
                //If we encountered -ve swap to make it make it less -ve
            }
            
            maxProd = max((long long)nums[i], maxProd * nums[i]);
            minProd = min((long long)nums[i], minProd * nums[i]);
            
            result = max(result, maxProd);
        }
        
        return result;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {6, -3, -10, 0, 2};
    cout << "Maximum product subarray: " << sol.maxProduct(nums) << endl; // Output: 180
    return 0;
}
