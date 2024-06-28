#include <bits/stdc++.h>
using namespace std;

const int N = 105, INF = 0x3f3f3f3f;
int g[N][N], d[N];

int main()
{
    int n, m;
    cin >> n >> m;

    memset(g, 0x3f, sizeof g);

    int u, v, w;
    for (int i = 1; i <= m; i++)
    {
        cin >> u >> v >> w;
        g[v][u] = w;
    }

    for (int i = 1; i <= n; i++)
        g[0][i] = 0;

    memset(d, 0, sizeof d);

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            for (int k = 1; k <= n; k++)
                if (d[k] > d[j] + g[j][k])
                    d[k] = d[j] + g[j][k];

    for (int i = 1; i < n; i++)
        cout << d[i] << " ";
    cout << d[n] << endl;

    return 0;
}