#include <bits/stdc++.h>
using namespace std;

const int MAXN = 2e5 + 5;
vector<int> G[MAXN];
int sz[MAXN];
long long dp[MAXN];

void dfs1(int v, int p = -1) {
    sz[v] = 1;
    for (int u : G[v]) {
        if (u == p) continue;
        dfs1(u, v);
        sz[v] += sz[u];
        dp[v] += dp[u] + sz[u];
    }
}

void dfs2(int v, int p = -1) {
    for (int u : G[v]) {
        if (u == p) continue;
        dp[u] = dp[v] - sz[u] + (sz[1] - sz[u]);
        dfs2(u, v);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int N;
    cin >> N;
    for (int i = 0; i < N - 1; i++) {
        int u, v;
        cin >> u >> v;
        G[u].push_back(v);
        G[v].push_back(u);
    }

    dfs1(1);
    dfs2(1);

    for (int i = 1; i <= N; i++) {
        cout << dp[i] << "\n";
    }

    return 0;
}