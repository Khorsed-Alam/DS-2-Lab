#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    // Step 1: Sort array
    sort(a.begin(), a.end());

    // Step 2: Pick median
    int median = a[n / 2]; // 0-indexed

    // Step 3: Compute total cost
    long long cost = 0;
    for (int x : a)
        cost += abs(x - median);

    cout << cost << "\n";
    return 0;
}
