#include <bits/stdc++.h>
using namespace std;

const int N = 1e2 + 1;
const int INF = 1e9;

int dis[N][N];
bool vis[N];
int minDis[N];

int prim(int n)
{
    for (int i = 0; i < n; i++)
    {
        minDis[i] = INF;
        vis[i] = false;
    }
    minDis[0] = 0;
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int u = -1, MIN = INF;
        for (int j = 0; j < n; j++)
        {
            if (!vis[j] and minDis[j] < MIN)
            {
                u = j;
                MIN = minDis[j];
            }
        }
        if (u == -1)
            return -1;
        vis[u] = true;
        res += minDis[u];
        for (int v = 0; v < n; v++)
        {
            if (!vis[v] and dis[u][v] != INF and dis[u][v] < minDis[v])
            {
                minDis[v] = dis[u][v];
            }
        }
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> dis[i][j];
            if (dis[i][j] == 0)
                dis[i][j] = INF;
        }
    }
    cout << prim(n) << endl;
    return 0;
}