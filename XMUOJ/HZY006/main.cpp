#include <bits/stdc++.h>
using namespace std;

const int MAXN = 105;
const int INF = 1e9;
int N, dist[MAXN][MAXN], minDist[MAXN];
bool visited[MAXN];

int prim()
{
    for (int i = 1; i <= N; i++)
    {
        minDist[i] = INF;
        visited[i] = false;
    }
    minDist[1] = 0;
    int res = 0;
    while (true)
    {
        int u = -1;
        for (int i = 1; i <= N; i++)
            if (!visited[i] and (u == -1 or minDist[i] < minDist[u]))
                u = i;
        if (u == -1) break;
        visited[u] = true;
        res += minDist[u];
        for (int v = 1; v <= N; v++)
            minDist[v] = min(minDist[v], dist[u][v]);
    }
    return res;
}

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
            cin >> dist[i][j];

    cout << prim() << endl;

    return 0;
}