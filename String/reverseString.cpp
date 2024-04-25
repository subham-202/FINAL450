#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};

int main() {
    // Create a vector of characters
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};

    // Print the original string
    cout << "Original string: ";
    for (char ch : s) {
        cout << ch;
    }
    cout << endl;

    // Create an instance of Solution class
    Solution solution;

    // Reverse the string
    solution.reverseString(s);

    // Print the reversed string
    cout << "Reversed string: ";
    for (char ch : s) {
        cout << ch;
    }
    cout << endl;

    return 0;
}
