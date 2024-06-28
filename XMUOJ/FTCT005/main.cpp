#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1e3 + 5;
vector<int> G[MAXN];
int match[MAXN];
bool used[MAXN];
int k, m, n;

bool dfs(int v)
{
    used[v] = true;
    for (int i = 0; i < G[v].size(); i++)
    {
        int u = G[v][i], w = match[u];
        if (w < 0 or !used[w] and dfs(w))
        {
            match[v] = u;
            match[u] = v;
            return true;
        }
    }
    return false;
}

int bipartite_matching()
{
    int res = 0;
    memset(match, -1, sizeof(match));
    for (int v = 1; v <= m; v++)
    {
        if (match[v] < 0)
        {
            memset(used, 0, sizeof(used));
            if (dfs(v)) res++;
        }
    }
    return res;
}

int main()
{
    while (cin >> k >> m >> n)
    {
        for (int i = 1; i <= m; i++) G[i].clear();
        for (int i = 0; i < k; i++)
        {
            int u, v;
            cin >> u >> v;
            G[u].push_back(v + m);
            G[v + m].push_back(u);
        }
        cout << bipartite_matching() << endl;
    }
    return 0;
}