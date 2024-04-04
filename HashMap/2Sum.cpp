#include<bits/stdc++.h>
#include<string>
using namespace std;
//Brute Force
string twoSum(int n,vector<int> &arr,int target){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(target-arr[i]==arr[j])
                return "true";
        }
    }
    return "false";
}
using namespace std;
int main()
{
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 14;
    string ans = twoSum(n, arr, target);
    cout << "This is the answer for variant 1: " << ans << endl;
    return 0;
}