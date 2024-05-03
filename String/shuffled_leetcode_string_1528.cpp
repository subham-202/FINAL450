//1528. Shuffle String leetcode
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        // Create a string of the same length as s, initialized with spaces
        string shuffled(s.length(), ' ');
        
        // Iterate through each character of s
        for (int i = 0; i < s.length(); i++) {
            // Place each character of s at the index specified by indices[i] in shuffled
            shuffled[indices[i]] = s[i];
        }
        
        // Return the shuffled string
        return shuffled;
    }
};

int main() {
    Solution solution;
    
    string s = "codeleet";
    vector<int> indices = {4, 5, 6, 7, 0, 2, 1, 3};
    
    // Output: "leetcode"
    cout << solution.restoreString(s, indices) << endl;
    
    return 0;
}

