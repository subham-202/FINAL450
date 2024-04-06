//SumEqualsZero:Brut Force
#include <iostream>
#include <vector>
using namespace std;
bool hasZeroSumSubarray(std::vector<int>& arr) {
    int n=arr.size();
    int sum;
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=1;j<n;j++){
            sum+=arr[j];
            if(sum==0)
                return true;
        }
    }
    return false;
}

int main() {
    vector<int> arr = {4, 2, -3, 1, 6};
    cout << boolalpha << hasZeroSumSubarray(arr) <<endl; // Output: true
    return 0;
}
