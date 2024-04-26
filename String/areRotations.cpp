#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string a, string b) {
        // Concatenate a with itself
        a += a;
        // Now a contains two copies of the original string
        // Check if b is a substring of a
        if (a.find(b) != string::npos)
            return true; // b is a rotation of a
        else
            return false; // b is not a rotation of a
    }
};

int main() {
    Solution solution;
    string a = "AACD";
    string b = "ACDA";

    // Check if b is a rotation of a
    if (solution.areRotations(a, b))
        cout << "Yes, " << b << " is a rotation of " << a << endl;
    else
        cout << "No, " << b << " is not a rotation of " << a << endl;

    return 0;
}
