#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int maxcrossingSum(int arr[], int l, int mid, int h) {
    int sum = 0, leftSum = INT_MIN;
    for (int i = mid; i >= l; i--) {
        sum += arr[i];
        leftSum = max(leftSum, sum);
    }

    sum = 0;
    int rightSum = INT_MIN;
    for (int i = mid + 1; i <= h; i++) {
        sum += arr[i];
        rightSum = max(rightSum, sum);
    }

    return leftSum + rightSum;
}

int MaxSubarray(int arr[], int l, int h) {
    if (l == h) return arr[l];

    int mid = (l + h) / 2;
    return max(
        MaxSubarray(arr, l, mid),
        max(MaxSubarray(arr, mid + 1, h), maxcrossingSum(arr, l, mid, h))
    );
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &val : arr) cin >> val;

    cout << "Maximum subarray Sum: " << MaxSubarray(arr.data(), 0, n - 1) << endl;
    return 0;
}
