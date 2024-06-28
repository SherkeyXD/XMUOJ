#include <bits/stdc++.h>
using namespace std;

const int MAXN = 205;
const int INF = 1e9;

struct Edge {
    int to, cap, rev;
};

vector<Edge> G[MAXN];
int level[MAXN];
int iter[MAXN];

void add_edge(int from, int to, int cap) {
    G[from].push_back((Edge){to, cap, (int)G[to].size()});
    G[to].push_back((Edge){from, 0, (int)G[from].size() - 1});
}

void bfs(int s) {
    memset(level, -1, sizeof(level));
    queue<int> que;
    level[s] = 0;
    que.push(s);
    while (!que.empty()) {
        int v = que.front(); que.pop();
        for (int i = 0; i < G[v].size(); i++) {
            Edge &e = G[v][i];
            if (e.cap > 0 and level[e.to] < 0) {
                level[e.to] = level[v] + 1;
                que.push(e.to);
            }
        }
    }
}

int dfs(int v, int t, int f) {
    if (v == t) return f;
    for (int &i = iter[v]; i < G[v].size(); i++) {
        Edge &e = G[v][i];
        if (e.cap > 0 and level[v] < level[e.to]) {
            int d = dfs(e.to, t, min(f, e.cap));
            if (d > 0) {
                e.cap -= d;
                G[e.to][e.rev].cap += d;
                return d;
            }
        }
    }
    return 0;
}

int max_flow(int s, int t) {
    int flow = 0;
    while (true) {
        bfs(s);
        if (level[t] < 0) return flow;
        memset(iter, 0, sizeof(iter));
        int f;
        while ((f = dfs(s, t, INF)) > 0) {
            flow += f;
        }
    }
}

int main() {
    int M, N;
    cin >> M >> N;
    for (int i = 0; i < M; i++) {
        int S, E, C;
        cin >> S >> E >> C;
        S--; E--;
        add_edge(S, E, C);
    }
    cout << max_flow(0, N - 1) << endl;
    return 0;
}