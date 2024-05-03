#include <iostream>
#include <algorithm>

using namespace std;

// length of result string should be equal to sum of two strings
bool checkLength(const string& first, const string& second, const string& result) {
    return first.length() + second.length() == result.length();
}

// this method converts the string to sorted string
string sortString(const string& str) {
    string sortedStr = str;
    sort(sortedStr.begin(), sortedStr.end());
    return sortedStr;
}

// this method compares each character of the result with 
// individual characters of the first and second string
bool shuffleCheck(const string& first, const string& second, const string& result) {
    string sortedFirst = sortString(first);
    string sortedSecond = sortString(second);
    string sortedResult = sortString(result);

    int i = 0, j = 0;

    for (int k = 0; k < sortedResult.length(); ++k) {
        if (i < sortedFirst.length() && sortedFirst[i] == sortedResult[k])
            i++;
        else if (j < sortedSecond.length() && sortedSecond[j] == sortedResult[k])
            j++;
        else
            return false;
    }

    if (i < sortedFirst.length() || j < sortedSecond.length())
        return false;

    return true;
}


int main() {
    string first = "XY";
    string second = "12";
    string results[] = {"1XY2", "Y1X2", "Y21XX"};
    int size = sizeof(results) / sizeof(results[0]);

    for (int i = 0; i < size; ++i) {
        if (checkLength(first, second, results[i]) && shuffleCheck(first, second, results[i])) {
            cout << results[i] << " is a valid shuffle of " << first << " and " << second << endl;
        } else {
            cout << results[i] << " is not a valid shuffle of " << first << " and " << second << endl;
        }
    }

    return 0;
}
