#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1, string s2) {
        // Check if lengths are equal
        if (s1.length() != s2.length())
            return false;

        int n = s1.length();

        // Check if s2 is a rotation of s1 for each possible pivot point
        for (int pivot = 0; pivot < n; ++pivot) {
            bool isRotation = true;
            for (int i = 0; i < n; ++i) {
                if (s1[i] != s2[(pivot + i) % n]) {
                    isRotation = false;
                    break;
                }
            }
            if (isRotation)
                return true;
        }

        return false;
    }
};

int main() {
    Solution solution;
    string s1 = "geeksforgeeks";
    string s2 = "forgeeksgeeks";
    cout << solution.areRotations(s1, s2) << endl; // Output: 1
    return 0;
}