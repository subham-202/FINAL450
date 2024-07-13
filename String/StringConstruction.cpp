#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

int stringConstruction(const string& s) {
    unordered_set<char> uniqueChars(s.begin(), s.end());
    return uniqueChars.size();
}

int main() {
    int q;
    cin >> q;
    vector<string> strings(q);
    for(int i = 0; i < q; ++i) {
        cin >> strings[i];
    }
    for(const string& s : strings) {
        cout << stringConstruction(s) << endl;
    }
    return 0;
}
