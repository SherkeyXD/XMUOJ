#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1005;
vector<int> g[MAXN];
bool vis[MAXN];

int bfs(int s, int L)
{
    memset(vis, false, sizeof(vis));
    queue<pair<int, int>> q;
    q.push({s, 0});
    vis[s] = true;
    int cnt = 0;
    while (!q.empty())
    {
        int v = q.front().first;
        int l = q.front().second;
        q.pop();
        cnt++;
        if (l < L)
        {
            for (int u : g[v])
            {
                if (!vis[u])
                {
                    q.push({u, l + 1});
                    vis[u] = true;
                }
            }
        }
    }
    return cnt - 1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);

    int N, L;
    cin >> N >> L;

    for (int i = 1; i <= N; i++)
    {
        int M;
        cin >> M;
        for (int j = 0; j < M; j++)
        {
            int u;
            cin >> u;
            g[u].push_back(i);
        }
    }

    int K;
    cin >> K;
    while (K--)
    {
        int u;
        cin >> u;
        cout << bfs(u, L) << endl;
    }

    return 0;
}