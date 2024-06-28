#include <bits/stdc++.h>
using namespace std;

const int MAXN = 1050;
const int INF = 0x3f3f3f3f;

int dis[MAXN], vis[MAXN];
vector<pair<int, int>> edge[MAXN];
int fireStation[MAXN];

void addEdge(int u, int v, int w)
{
    edge[u].push_back(make_pair(v, w));
    edge[v].push_back(make_pair(u, w));
}

void dijkstra(int start)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    dis[start] = 0;
    q.push(make_pair(0, start));
    while (!q.empty())
    {
        int u = q.top().second;
        q.pop();
        if (vis[u])
            continue;
        vis[u] = 1;
        for (auto e : edge[u])
        {
            int v = e.first, w = e.second;
            if (dis[v] > dis[u] + w)
            {
                dis[v] = dis[u] + w;
                q.push(make_pair(dis[v], v));
            }
        }
    }
}

void init()
{
    for (int i = 0; i < MAXN; i++)
    {
        edge[i].clear();
        dis[i] = INF;
        vis[i] = 0;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, M, P, Q, u, v, w;
        cin >> N >> M >> P >> Q;

        init();

        for (int i = 0; i < N; i++)
            cin >> fireStation[i];

        while (P--)
        {
            cin >> u >> v >> w;
            addEdge(u, v, w);
        }

        int ans = INF;
        for (int i = 0; i < N; i++)
        {
            fill(dis, dis + M + 1, INF);
            fill(vis, vis + M + 1, 0);
            dijkstra(fireStation[i]);
            ans = min(ans, dis[Q]);
        }

        cout << ans << endl;
    }

    return 0;
}