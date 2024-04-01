//MergeOverlappingIntervals
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    // Function to merge overlapping intervals
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergedIntervals;
        
        // If no elements in the 2D array, return empty vector
        if (intervals.size() <= 0) {
            return mergedIntervals;
        }
        
        // Sorting the array of intervals based on the start time
        sort(intervals.begin(), intervals.end());
        
        vector<int> tempInterval = intervals[0];
        
        // Iterating through intervals and merging overlapping ones
        for (auto it : intervals) {
            if (it[0] <= tempInterval[1]) {
                tempInterval[1] = max(it[1], tempInterval[1]);    
            } else {
                mergedIntervals.push_back(tempInterval);
                tempInterval = it;
            }
        }
        
        // Push the last merged interval
        mergedIntervals.push_back(tempInterval);
        
        return mergedIntervals;
    }
};

int main() {
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}}; // Example intervals
    Solution solution; // Create an instance of the Solution class

    // Call the merge method to merge the intervals
    vector<vector<int>> merged = solution.merge(intervals);

    // Print the merged intervals
    cout << "Merged intervals: ";
    for (auto interval : merged) {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
