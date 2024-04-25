#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int isPalindrome(string S) {
        string s1 = S; // Make a copy of the original string
        int right = S.size() - 1;
        int left = 0;

        while (left < right) {
            if (S[left] != S[right]) // Check if characters at symmetric positions are equal
                return 0; // If not equal, return 0 indicating not a palindrome
            left++;
            right--;
        }

        return 1; // If the loop completes, it means the string is a palindrome, so return 1
    }
};

int main() {
    Solution sol;
    string input = "boss"; // Predefined string

    if (sol.isPalindrome(input))
        cout << "The string is a palindrome.\n";
    else
        cout << "The string is not a palindrome.\n";

    return 0;
}
