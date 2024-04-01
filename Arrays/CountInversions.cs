// CountInversions

class Solution {
public:
    // Function to merge two sorted halves and count inversions
    long long merge(long long arr[], long long temp[], long long l, long long mid, long long r) {
        long long inv = 0;
        long long i = l, j = mid + 1, k = l;
        while (i <= mid && j <= r) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            } else {
                temp[k++] = arr[j++];
                // If arr[i] > arr[j], then there are (mid - i + 1) inversions
                inv += (mid - i + 1);
            }
        }
        while (i <= mid) {
            temp[k++] = arr[i++];
        }
        while (j <= r) {
            temp[k++] = arr[j++];
        }
        for (long long p = l; p <= r; p++) {
            arr[p] = temp[p];
        }
        return inv;
    }

    // Function to recursively divide and merge sort the array while counting inversions
    long long mergeSort(long long arr[], long long temp[], long long l, long long r) {
        long long inv = 0;
        if (l < r) {
            long long mid = (l + r) / 2;
            inv += mergeSort(arr, temp, l, mid);
            inv += mergeSort(arr, temp, mid + 1, r);
            inv += merge(arr, temp, l, mid, r);
        }
        return inv;
    }

    // Function to count inversions in the given array
    long long inversionCount(long long arr[], long long N) {
        long long temp[N];
        return mergeSort(arr, temp, 0, N - 1);
    }
};
