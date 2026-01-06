#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double x[1000], y[1000];
    for (int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    double minDist = 1e18;

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double dx = x[i] - x[j];
            double dy = y[i] - y[j];
            double dist = sqrt(dx*dx + dy*dy);
            minDist = min(minDist, dist);
        }
    }

    cout << fixed << setprecision(6) << minDist;
    return 0;
}
