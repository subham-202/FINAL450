#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        // Swap characters from left and right until the pointers meet in the middle
        while (left < right) {
            char temp = s[left];
            s[left] = s[right];
            s[right] = temp;
            left++;
            right--;
        }
    }
};

int main() {
    // Example usage of the Solution class
    Solution solution;
    
    // Create a vector of characters
    vector<char> input = {'h', 'e', 'l', 'l', 'o'};
    
    // Print original string
    cout << "Original string: ";
    for (char c : input) {
        cout << c;
    }
    cout << endl;
    
    // Reverse the string
    solution.reverseString(input);
    
    // Print reversed string
    cout << "Reversed string: ";
    for (char c : input) {
        cout << c;
    }
    cout << endl;
    
    return 0;
}
