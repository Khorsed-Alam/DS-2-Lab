#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> tree;
vector<vector<int>> dp;

void dfs(int u, int parent) {
    dp[u][1] = 1; // include u
    dp[u][0] = 0; // do not include u

    for (int v : tree[u]) {
        if (v == parent) continue; // avoid going back
        dfs(v, u);

        // if u is included, cannot include child
        dp[u][1] += dp[v][0];

        // if u is not included, take max of including or not including child
        dp[u][0] += max(dp[v][0], dp[v][1]);
    }
}

int main() {
    int n;
    cin >> n;

    tree.resize(n + 1);
    dp.assign(n + 1, vector<int>(2));

    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1, -1); // root the tree at 1

    cout << max(dp[1][0], dp[1][1]) << "\n";
    return 0;
}
