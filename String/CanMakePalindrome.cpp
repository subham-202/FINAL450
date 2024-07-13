#include <iostream>
#include <string>
#include <unordered_map>

std::string gameOfThrones(const std::string& s) {
    std::unordered_map<char, int> charCount;

    // Count the frequency of each character
    for (char c : s) {
        charCount[c]++;
    }

    int oddCount = 0;

    // Check how many characters have an odd frequency
    for (const auto& pair : charCount) {
        if (pair.second % 2 != 0) {
            oddCount++;
        }
    }

    // A palindrome can have at most one odd frequency character
    if (oddCount > 1) {
        return "NO";
    } else {
        return "YES";
    }
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    std::cout << gameOfThrones(input) << std::endl;

    return 0;
}
