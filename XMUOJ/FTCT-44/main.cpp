#include <bits/stdc++.h>
#define int long long

using namespace std;

const int N = 50005;
int n, m, b;
vector<pair<int, int>> adj[N];
map<pair<int, int>, int> vis;
int a[N];

bool Spfa(int x)
{
    vector<bool> inq(n + 1, false), flag(n + 1, false);
    vector<int> dis(n + 1, LLONG_MAX);
    for (int i = 1; i <= n; ++i)
        if (a[i] <= x) flag[i] = false;
        else flag[i] = true;
    dis[1] = 0;
    queue<int> q;
    q.push(1);
    inq[1] = true;
    while (!q.empty())
    {
        int now = q.front();
        q.pop();
        inq[now] = false;
        if (flag[now])
            continue;
        for (auto &edge : adj[now])
        {
            int v = edge.first, w = edge.second;
            if (flag[v] or dis[v] <= dis[now] + w) continue;
            dis[v] = dis[now] + w;
            if (!inq[v])
            {
                q.push(v);
                inq[v] = true;
            }
        }
    }
    return dis[n] <= b;
}

signed main()
{
    cin >> n >> m >> b;
    int l = 0, r = 0;

    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        r = max(a[i], r);
    }

    while (m--)
    {
        int u, v, w;
        cin >> u >> v >> w;
        if (vis[{u, v}] or vis[{v, u}])
            continue;
        vis[{u, v}] = vis[{v, u}] = 1;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }

    if (!Spfa(LLONG_MAX))
    {
        cout << "AFK" << endl;
        return 0;
    }

    int ans = -1;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (Spfa(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }

    cout << ans << endl;

    return 0;
}