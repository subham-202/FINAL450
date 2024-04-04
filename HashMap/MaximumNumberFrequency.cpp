//Incorrect Approach
#include <bits/stdc++.h>
using namespace std;

int findMajorityElement(vector<int> &arr, int n) {
    unordered_map<int, int> count;
    for (int i = 0; i < n; i++) {
        count[arr[i]]++;
    }
    int maxi = INT_MIN;
    int ans = -1;
    for (auto i : count) {
        if (i.second > maxi) {
            maxi = i.second;
            ans = i.first;
        }
    }
    return ans;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 2};
    int n = arr.size();
    cout << "Majority Element: " << findMajorityElement(arr, n) << endl;
    return 0;
}
