//Q2-Find Sum
#include <iostream>
#include <climits>

using namespace std;

class Solution
{
public:
    int findSum(int A[], int n)
    {
        int sum;
        int min = INT_MAX, max = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (min > A[i])
                min = A[i];
            if (max < A[i])
                max = A[i];
        }
        sum = min + max;
        return sum;
    }
};

int main()
{
    int A[] = {5, 3, 9, 1, 7}; // Example array
    int n = sizeof(A) / sizeof(A[0]); // Calculate the size of the array

    Solution solution; // Create an instance of the Solution class

    int result = solution.findSum(A, n); // Call the findSum method

    cout << "Sum of minimum and maximum elements: " << result << endl;

    return 0;
}
