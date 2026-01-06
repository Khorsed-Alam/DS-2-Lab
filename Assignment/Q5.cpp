#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> arrival(n), departure(n);
    for (int &x : arrival) cin >> x;
    for (int &x : departure) cin >> x;

    // Create events: pair = (time, type)
    vector<pair<int,int>> events;
    for (int i = 0; i < n; i++) {
        events.push_back({arrival[i], 1});   // arrival
        events.push_back({departure[i], -1}); // departure
    }

    // Sort events by time
    sort(events.begin(), events.end());

    int count = 0, maxPlatforms = 0;
    for (auto e : events) {
        count += e.second;           // +1 if arrival, -1 if departure
        maxPlatforms = max(maxPlatforms, count);
    }

    cout << maxPlatforms << "\n";
    return 0;
}
