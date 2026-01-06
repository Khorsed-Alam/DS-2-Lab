#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> students(n), rooms(m);
    for (int &s : students) cin >> s;
    for (int &r : rooms) cin >> r;

    sort(students.begin(), students.end());
    sort(rooms.begin(), rooms.end());

    int assigned = 0;
    vector<bool> used(m, false); // track which rooms are used

    for (int s : students) {
        for (int j = 0; j < m; j++) {
            if (!used[j] && rooms[j] >= s) {
                used[j] = true;  // assign this room
                assigned++;
                break;           // move to next student
            }
        }
    }

    cout << assigned << "\n";
    return 0;
}
